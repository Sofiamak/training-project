    #include <bits/stdc++.h> 
#include <iostream>
#include <string>
#include <string>
#include "console.cpp"

class App{

public:
    void static RunConsole(){

        Console c; 
        cout<<"Login or SingUp:"<<endl;
        c.optionsCout();
       
        while(true)
        {
            c.consoleRun();
            continue;
        }
    }
};