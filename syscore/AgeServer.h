#ifndef _AGESERVER_H
#define _AGESERVER_H

#pragma once
#include "AtxStream.h"
#include <types.hpp>

template <typename T>
class IDelegate1 {
};

class DllImport AgeServer : public AtxStream {
public:
    AgeServer(class AgeServer const&);
    AgeServer(void);
    class AgeServer& operator=(class AgeServer const&);
    void Done(void);
    void EndBitGroup(void);
    void EndGroup(void);
    void EndNode(void);
    void EndOptionBox(void);
    void EndSection(void);
    void NewBit(char*, unsigned __int32, unsigned __int32);
    void NewButton(char*, class IDelegate1<class AgeServer&>*, int);
    void NewButton(char*, class IDelegate*, int);
    void NewEditor(char*, char*, int);
    void NewEditor(char*, char*, int, int, int);
    void NewEditor(char*, short*, int, int, int);
    void NewEditor(char*, int*, int, int, int);
    void NewEditor(char*, float*, float, float, int);
    void NewEditor(char*, class AyuImage*, bool);
    void NewEditor(char*, class Colour*);
    void NewLabel(char*);
    void NewNode(char*, class ANode*);
    void NewNodeWindow(char*);
    void NewOption(char*, int);
    void NewPropWindow(char*, unsigned __int32);
    void NewViewer(char*, int*);
    void NewViewer(char*, float*);
    bool Open(void);
    void RefreshNode(void);
    void RefreshSection(void);
    void StartBitGroup(char*, unsigned __int8*, int);
    void StartBitGroup(char*, unsigned __int32*, int);
    void StartGroup(char*);
    void StartOptionBox(char*, int*, int);
    void StartOptionBox(char*, unsigned __int8*, int);
    void StartOptionBox(char*, unsigned __int16*, int);
    void StartSection(char*, bool);
    bool getOpenFilename(class String&, char*);
    bool getSaveFilename(class String&, char*);
    void readPropValue(enum PROP_TYPE, void*);
    void setOnChange(class IDelegate1<class AgeServer&>*);
    void setOnChange(class IDelegate*);
    void setSectionRefresh(class IDelegate1<class AgeServer&>*);
    int update(void);
    void writeProp(enum PROP_TYPE, void*);
    void writePropValue(enum PROP_TYPE, void*);

    virtual void close(void);

    bool m_inSection; // _10
};

EXPECT_SIZE(AgeServer, 0x14);

#endif
