
// //Group members: Yousef Khalil, Muhammed Kamel, Rawad Altagiuri
/////////////

#include <iostream>
#include <fstream>
#include <string>
#include <new>
#include "header.h"
using namespace std;

// // class USAdate {
// // unsigned short year;
// // unsigned short month;
// // unsigned short day;
// // };

class USAStates {
    string state;
    string abbreviation;
    string capital;
    //USAdate dates;
    string populous_City;
    unsigned int population; 
    //unsigned int timeZone;

};

int main()
{

    string line, file = "us_states.xml";
    ifstream txtFile(file);
    if(txtFile.is_open())
    {
        while (getline(txtFile, file))
            cout << file << endl;
        txtFile.close();
    }
    else cout << "unable to open file " << file;

    // menu obj1;
    // obj1.mainScreen();
    return 0;
//    cout << "Hello world" << endl;

}

void readFile(string fileName)   //function to read the xml file NOTE: it has a wanrning (no return statement)
{
    string line;
    ifstream txtFile (fileName);
    if(txtFile.is_open())
    {
        while(getline(txtFile, line))
            cout << line << endl;
        txtFile.close();
    }
    else cout << "Unable to open file " << fileName;
}
