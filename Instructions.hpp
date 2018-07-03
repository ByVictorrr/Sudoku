
#ifndef Instructions_hpp
#define Instructions_hpp

#include <stdio.h>

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#pragma once
using namespace std;


//instructions for the startmenue
class instruction{
private:
    string Exit, End, ExitScreen;
public:
    
    //setting the exit string
    void setExit(string e);    
    string getExit();
    
    //setting the end string
    void setEnd(string end);
    //getting Press 4 to ext
    string getEnd();
    void setExitScreen(string es);
    //getting Press e to ext
    string getExitScreen();
    void printInstructions();
    //strageteies
    void printStrategies();
};



#endif /* Instructions_hpp */
