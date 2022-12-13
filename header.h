#include <iostream>
#include <string>
using namespace std;

class menu {
public:
    void mainScreen()
    {
        int num;
        cout << "Choose an option by number: " << endl;
        cout << "1 - Data of a state: " << endl;
        cout << "2 - Capitals of all States: " << endl;
        cout << "3 - Five largest states: " << endl;
        cout << "4 - States ordered based on their date of admission: " << endl;
        cout << "5 - Overall area of USA in square miles: " << endl;
        cout << "6 - Overall population of USA: " << endl;
        cout << "7 - EXit application: " << endl;
        cin >> num;
        bool flag = false;
        while(!flag)
        {
            if(num == 1)
            {
                cout << "Data of states: " << endl;
                // return;
                flag = true;
                mainScreen();
                
            }
            else if(num == 2)
            {
                cout << "Capital cities in alphabetical order: " << endl;
                flag = true;
                mainScreen();

            }
            else if(num == 3)
            {
                cout << "Five largest states: " << endl;
                flag = true;
                mainScreen();
            }
            else if(num == 4)
            {
                cout << "States ordered based on their date of admission: " << endl;
                flag = true;
                mainScreen();
            }
            else if(num == 5)
            {
                cout << "Overall area of USA: " << endl;
                flag = true;
                mainScreen();
            }
            else if( num == 6)
            {
                cout << "Overall population of USA: " << endl;
                flag = true;
                mainScreen();
            }
            

            else if(num == 7)
            {
                //flag = true;
                return;
            }
            else
            {
                return;
            }
        }
    }
};

