#ifndef MainScreen
#define MainScreen

#include <iostream>
#include <fstream>
#include <string>
#include "FunctionsHeader.h"
using namespace std;



void mainscreen(){
    

    State*state=new (nothrow)State[53];
    if(state != nullptr)
    {
        org obj(state);
        if(obj.flggetter()==false){ cout << "The file is not available";} //set a flag in case the file is not available
        else{
        int input; //here we take the user's input on which quere they want to see
        cout << "pick one of the option" << '\n';
        cout << "1-enter the name of a state and get information about it\n";
        cout << "2-print out all the state's capitals in alphabetical order\n";
        cout << "3-print out the five largest states from largest descending" << endl;
        cout << "4-print out states ordered based on their date of admission" << endl;
        cout << "5-overall area of the United States of America, in square miles" << endl;
        cout << "6-overall population of the United States of America" << endl;

        cin >> input;
        if(input == 1){
            string statename;
            cout << "Please input a state's name: ";
            
            getline(cin >>ws, statename);
            
            strinput(statename, state);
            
            delete [] state;
        }
        else if(input == 2){
            sortStringArray(state);
            delete [] state;
        }
        else if(input ==3)
        {
            fiveLargest(state);
            delete[] state;
        }
        else if(input ==4)
        {
            sort_dates(state);
            delete[] state;
        }
        else if(input ==5)
        {
            totalArea(state);
            delete[] state;
        }
        else if(input ==6)
        {
            totalPopulation(state);
            delete[] state;
        }
        }
    }
}




#endif