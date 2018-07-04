
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include "Instructions.hpp"
#include "startMenu.hpp"

#pragma once


using namespace std;







void startMenu::MainMenu(){


        for(int x = 0; x <2; x++){


                            for(int p= 0;  p<4; p++){

                                cout << setw(20)<< Word[0]<< "\n";
                                cout << setw(20)<< Word[1]<< "\n";
                                cout << setw(20)<< Word[2]<< "\n";
                                cout << setw(20)<< Word[5]<< "\n";

                    cin >> Press[p];








                    //presing 1 (main menue)
                                if (Press[p] == 1) {
                        cout << "                                     Games Played: " << GamesPlayed <<"\n\n";
                                    cout << "                                 Average Score/Game: " << averageScore << "\n\n";

                        cout << "           ➳Press 1 - Very Easy ☑︎\n\n";
                        cout << "           ➳Press 2 - Easy ☑︎\n\n";
                        cout << "           ➳Press 3 - Medium ☑︎\n\n";
                        cout << "           ➳Press 4 - Hard ☑︎\n\n";
                        cin>> Press[p];

                        //setting suduko


                        //very easy
                        {
                        {{

                            if(Press[p] == 1){


                                 cout << "Last chance to Return back to main Menu type (m), type anything else continue: \n\n";


                                cin>>YoN[p];
                                if (YoN[p] == "m") {
                                    //returns to the start menue
                                    MainMenu();
                                    //pressing 5 ends program
                                }


                                else{

                                    Games[0].veryEasyGame();
                                    GamesPlayed++;
                                     averageScore = Score/(GamesPlayed);

                                    while (true) {


                                cout << "\n\nwelcome again would you like to Play again?(Type (y) to Continue, to quit Type anything else)\n\n";
                                cin >> YoN[p];
                                if (YoN[p] == "y") {



                                MainMenu();
                                }
                                else{
                                    exit(EXIT_FAILURE);

                                }

                                    }
                                }

                                                    }
                        }

                            //easy
                            if(Press[p] == 2){


                              cout << "Last chance to Return back to main Menu type (m), type anything else continue: \n\n";
                                cin>>YoN[p];
                                if (YoN[p] == "m") {
                                    //returns to the start menue
                                    MainMenu();
                                    //pressing 5 ends program
                                }

                                else
                                    Games[1].EasyGame();
                                GamesPlayed++;
                                 averageScore = Score/(GamesPlayed);

                                while (true) {


                                cout << "\n\nWelcome again would you like to Play again?(Enter (y) to Continue, to quit Type anything else)\n\n";
                                cin >> YoN[p];
                                if (YoN[p] == "y") {



                                    MainMenu();
                                }
                                else{
                                    exit(EXIT_FAILURE);
                                }
                                }
                            }
                        }






                        //medium
                        if(Press[p] == 3){


                             cout << "Last chance to Return back to main Menu type (m), type anything else continue: \n\n";
                            cin>>YoN[p];
                            if (YoN[p] == "m") {
                                //returns to the start menue
                                MainMenu();
                                //pressing 5 ends program
                            }

                            else
                                Games[2].MediumGame();
                             GamesPlayed++;
                            averageScore = Score/(GamesPlayed);

                            while (true) {


                                cout << "\n\nwelcome again would you like to Play again?(Type (y) to Continue, to quit type anything else)\n\n";

                            cin >> YoN[p];
                            if (YoN[p] == "y") {



                                MainMenu();
                            }
                            else{
                                exit(EXIT_FAILURE);
                            }
                        }
                        }
                    }

                        //very hard
                        if(Press[p] == 4){


                            cout << "Last chance to Return back to main Menu type (m), type anything else continue: \n\n";

                            cin>>YoN[p];
                            if (YoN[p] == "m") {
                                //returns to the start menue
                                MainMenu();
                                //pressing 5 ends program
                            }

                            else
                                Games[3].HardGame();
                          GamesPlayed++;
                            averageScore = Score/(GamesPlayed);

                            while(true){

                                cout << "\n\nwelcome again would you like to Play again?(Type (y) to Continue, to quit type anything else)\n\n";
                            cin >> YoN[p];
                            if (YoN[p] == "y") {



                                MainMenu();
                            }
                            else{
                                exit(EXIT_FAILURE);
                            }
                        }


                        }
                                }


                    //by Pressing 2 (main menue)

                    if (Press[p] == 2) {//printing instructions
                        ptrI -> printInstructions();
                        cout << "\n\n";
                        cout << ptrI -> getExit();
                        cout << ptrI -> getExitScreen();

                        cin>>YoN[p];
                        if (YoN[p] == "m") {
                            //returns to the start menue
                            MainMenu();
                            //pressing 5 ends program
                        }
                        if(YoN[p] == "e"){
                            cout << ptrI -> getEnd();
                            exit(EXIT_FAILURE);

                        }

                        //end of option 2
                    }



                    //pressing 3(main Menue)
                    if (Press[p] == 3) {//printing stategies
                        ptrI -> printStrategies();
                        cout << "\n\n";
                        //getExitScreen is Exit the program by pressing (5)
                        cout << ptrI -> getExit();
                        //GetExit is go back to main menue by pressing (4)
                        cout << ptrI -> getExitScreen();

                        cin>>YoN[p];
                        if (YoN[p] == "m") {
                            //returns to the start menue
                            MainMenu();
                            //pressing 5 ends program
                        }
                        if(YoN[p] == "e"){

                            cout << ptrI -> getEnd();
                            exit(EXIT_FAILURE);




                        }
                    }


                    //pressing 4
                    if (Press[p] == 4) {//Exit main menue
                        cout << ptrI -> getEnd();
                        exit(EXIT_FAILURE);
                    }



                }

        }

    }








     startMenu::startMenu(){
        //defaulting all the variables
        Word[0] = "             ➫ Press 1 - Start a New Game ☜\n";
        Word[1] = "             ➫ Press 2 - How to Play ☚\n";
        Word[2] = "             ➫ Press 3 - Strategies ☜\n";
        Word[3] = "                   〖«©Welcome To Victor Delaplaines Sudoku Challenge©»〗";
        Word[4] = "              Are you ready to Play? To continue type y/n for main menu: \n";
        Word[5] = "             ➫ Press 4 - Exit ☜\n";
        YoN[0] = 'y';
        YoN[1] = 'n';
         GamesPlayed = 0;
         Score = 100;

         averageScore = 0;



        //putting all my text for the main menue in string data type
        {
            cout << Word[3]<< "\n\n";

            cout << Word[4]<< "\n\n";

            for(int x = 0; x <4; x++){

                //entering yes or no
                cin >> YoN[x];
                //if yes then:

                if(YoN[x] == "y"){

                    Games[x].getName();


            MainMenu();
                }

                //typing in (n)
                if (YoN[x] == "n"){

                    cout << "By typing in (n) you ended the program😭\n";
                    exit(EXIT_FAILURE);
                }


                else{
                    cout << setw(20)<<"                 {================={Not valid Type in y/n}================}" << "\n\n";

                    startMenu Exit;

                }


            }


        }


        cout << "\n";
    }



void startMenu::setVariables(string W[6], char yon[2]){
        Word[5] =W[5];
        YoN[1] = yon[1];
    }








