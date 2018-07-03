#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include "Instructions.hpp"
#include <cstdlib>







class Sudoku{
private:
    
    
    int grid[9][9];
    int knowngrid[9][9];
    int LeftNumber[10][10];
    string box[9][9], column[9][9];
    int row, col, num;
    string GridLay[3][3];
    string name;
    int random;
    string lines[9][9];
    string Ended;
    string Comments[5];
    int randomGame;
    char YON[2];
    int quit,errors;
    
   
protected:
    int Score;
    
public:
 
    
    
    
    
    Sudoku();
    void getName();
    
    void printDefaultGrid();
    
    void printGrid();
    
    void veryEasyGame();
    
    void EasyGame();
    
    void MediumGame();
 
    void HardGame();
    
    void ScoreSelection();
    
   
    void setGrid(char b[9][9], int leftNum[10][10], int Known[9][9], string c[9][9]);
   

    
    void printSudokuOnFile();
    
    
    
    bool checkEmptry();
    bool checkRightNum();
    
    
    
    bool Over10();
    
    
    bool FinishGame();
    
    
    
    
    
    
    
};