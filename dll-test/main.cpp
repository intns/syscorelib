#include <syscore/AppWindow.h>
#include <syscore/GameApp.h>
#include <syscore/OptionBox.h>
#include <syscore/System.h>
#include <syscore/attach_module.h>

static void print(const char* fmt, ...)
{
    if (!sysCon) {
        return;
    }

    va_list args;
    va_start(args, fmt);

    sysCon->print("%s: ", "axiotPlugin");

    char dest[1024];
    vsprintf(dest, fmt, args);
    if (strlen(dest)) {
        sysCon->write(dest, strlen(dest));
    }
}

class AxiotPlugin : public GameApp {
public:
    AxiotPlugin()
    {
        m_window = new AppWindow(nullptr, NULL, 0x16CF0000, 0x40000, true);
        m_window->m_app = this;

        RectArea frame(690, 312, 1260, 518);
        m_window->setFrame(frame);
        m_window->createWindow("DUIGenWin", "axiotPlugin", NULL);

        gsys->createDebugStream(m_window);
        m_window->refreshWindow();
        ShowWindow(m_window->m_hWnd, SW_SHOWNORMAL);

        print("axiot plugin setup complete\n");
    }

    ~AxiotPlugin()
    {
        delete m_window;
    }

    virtual int idle()
    {
        sysCurrWnd = m_window->m_hWnd;
        u32 updateC = idleupdate();
        sysCurrWnd = 0;

        if (!m_byte28 && !updateC) {
            return 0;
        }

        gsys->m_controllerMgr.update();
        m_window->update();

        gsys->m_timer->start("all", false);
        if (!m_pendingMessage && !m_server) {
            sysCurrWnd = m_window->m_hWnd;
            startAgeServer();
            sysCurrWnd = nullptr;

            m_pendingMessage = true;
        }
        gsys->m_timer->stop("all");

        return 1;
    }

    AppWindow* m_window = nullptr;
};

static AxiotPlugin* generatePlugin()
{
    return new AxiotPlugin;
}

Object ObjectList[]
    = {
          Object("axiotPlugin", true, &generatePlugin),
          Object(nullptr, false, nullptr),
      };