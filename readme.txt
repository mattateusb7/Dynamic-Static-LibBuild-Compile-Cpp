Visual Studio Code:
    Run the Tasks in tasks.json followig the steps below to Build Files.

------------------STATIC LIBS---------------------
 > Compile Static Libs
 > Build Static Libs
 > Build Main file and link Static Libs
 > Run main.exe in cmd 
 (Libs are loaded during Compile time no need for dll)  

------------------DYNAMIC LIBS--------------------
 > Build Dynamic Libs
 > Compile Main File
 > Build Main file and link Dynamic Libs
 > Run main.exe in cmd
 (.dll files must be present in the same location as the .exe file to be loaded during Runtime)
