
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include "Instructions.hpp"
#include "Sudoku.hpp"

#pragma once


using namespace std;





class startMenu:public Sudoku{
private:
    string Word[6];
    string YoN[2];
    //yes or no
    int Press[3];
    Sudoku Games[4];
    int GamesPlayed, averageScore;
    instruction *ptrI = new instruction;
public:
    
  
    
    void MainMenu();
    
    startMenu();
    
    
    void setVariables(string W[6], char yon[2]);
};







