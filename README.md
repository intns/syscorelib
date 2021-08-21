# syscorelib
 A set of visual studio projects setup using sysCore.dll to access the exported classes in user-defined code

## Disclaimer
Firstly, drag and drop the dataDir and plugins folder from the Pikmin 1 root into the output folder so that the programs can work properly once built.

Secondly, when using the syscore folder, if the class has a virtual function table, or any virtual function, check the implementation in the header file you're including from, if the order of the virtual functions hasn't been clearly organised (set apart from the other functions) then the order of the functions may be incorrect, which may cause crashes if you try and use any virtual function from that class. You'll be able to know for sure because Visual Studio complains about a RunTime Check Failure.
