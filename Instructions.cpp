#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include "instructions.hpp"
#pragma once
using namespace std;



    
    //setting the exit string
void instruction::setExit(string e){
        Exit = e;
    }
    //getting Press 4 to ext
    string instruction::getExit(){
        Exit ="⎨Press m - to get back to the Main Menue⎬\n";
        return Exit;
    }
    
    
    //setting the end string
    void instruction::setEnd(string end){
        End= end;
    }
    //getting Press 4 to ext
    string instruction::getEnd(){
        End ="Program Ended 😢\n";
        return End;
    }
    
    void instruction::setExitScreen(string es){
        ExitScreen = es;
    }
    //getting Press e to ext
    string instruction::getExitScreen(){
        ExitScreen ="⎨Press e - to Exit the Program⎬\n";
        return ExitScreen;
    }
    void instruction::printInstructions(){
        cout << "How to play sudoku:\n\n";
        
        cout << "*The objective is to fill a 9x9 grid so that each column, each row, and each of the nine 3x3 boxes (also called blocks or regions) contains the digits from 1 to 9.A cell is the smallest block in the game.\n\n*A row , column and region consists of 9 cells and the whole game consists of 81 cells.\n\n*A region has thicker lines surrounding it. This simply makes it easier to play the game.";
        
    }
    //strageteies
    void instruction::printStrategies(){
        
        cout << "\nBasic Solving Strategies\n\n\n";
        
        cout << "-The following are the basic rules used to solve killer sudokus Rule of 1.\n-This comes directly from the definition of sudoku. No region can contain any duplicate digits.\n-In a sudoku region each digit appears exactly once. For example, if a digit appears in a row, it cannot be in any other cell in the row.\n-Likewise, each digit can appear in a cage only once. If a digit is in a cage, it cannot appear in that cage again. \n\nRule of Necessity \n\n-This rule can be applied to sudoku regions (i.e., row, column, or nonet) or to a cage.\n-In the former case, each region must contain all the digits one to nine. Thus, if all the digits but one appear in a row, the missing digit must appear in the empty cell.\n\nRule of 45\n\n-Each sudoku region (i.e., row, column, or nonet) contains the digits one through nine. Thus, each sudoku region has a total value of 45. If S is the sum of all the cages contained entirely in a region, then the cells not covered must sum to 45-S.\n\nRule of K\n\n-The Rule-of-k is an extension of the Rule-of-1. If there are k cells contained entirely in a region that contain exactly k different possible values, then no other cell in that region can contain any of those k values.\n\n Sum Elimination\n\n-This strategy examines the different possible ways of making the sum of a cage. Reducing the number of different possible ways of making a sum, can often lead to a potential solution. There are many ways of reducing the number of sums. For example, if a 2-cage has a total of 3, 4, 16, or 17 there is only one combination of values that can be used. (3=2+1, 4=3+1, 16=9+7, and 17=9+8.) 3-cages with only 1 combination are: 6=1+2+3, 7=1+2+4, 23=9+8+6, 24=9+8+7. The sum calculator found in the online player page can be very handy.";
        
    }
    
    
