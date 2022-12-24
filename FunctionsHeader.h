#ifndef FunctionsHeader
#define FunctionsHeader
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int stringToInt(const string& );


class State{
    private:
        string name;
        string abbreviation;
        string capital;
        string date;
        string most_populous_city;
        int population;
        int square_miles;
        string time_zone_1;
        string time_zone_2;
        string dst;
    public:

        // Setters
        void setName(const string& newName) { name = newName; }
        void setAbbreviation(const string& newAbbreviation) { abbreviation = newAbbreviation; }
        void setCapital(const string& newCapital) { capital = newCapital; }
        void setDate(const string& newDate) { date = newDate; }
        void setMostPopulousCity(const string& newMostPopulousCity) { most_populous_city = newMostPopulousCity; }
        void setPopulation(int newPopulation) { population = newPopulation; }
        void setSquareMiles(int newSquareMiles) { square_miles = newSquareMiles; }
        void setTimeZone1(const string& newTimeZone1) { time_zone_1 = newTimeZone1; }
        void setTimeZone2(const string& newTimeZone2) { time_zone_2 = newTimeZone2; }
        void setDst(const string& newDst) { dst = newDst; }

        // Getters
        string getName()  { return name; }
        string getAbbreviation()  { return abbreviation; }
        string getCapital()  { return capital; }
        string getDate()  { return date; }
        string getMostPopulousCity() const { return most_populous_city; }
        int getPopulation()  { return population; }
        int getSquareMiles()  { return square_miles; }
        string getTimeZone1()  { return time_zone_1; }
        string getTimeZone2()  { return time_zone_2; }
        string getDst() { return dst; }
        ~State(){};
};

class org
{
    private:
        bool flag = true;
    public:
         //setter
        void flgsetter(bool flg){flag = flg;}
        //getter
        bool flggetter(){return flag;}
        // constructer and destructer
        org(){};
        org(State*state)
        {
            ifstream file("us_states.xml");
            if(file.is_open())
            {
                string line;
                int i = -1;
                while (getline(file, line))
                {
                    // Check if the line contains the name of the state
                    size_t pos = line.find(" name=");
                    if (pos != string::npos)
                    {
                        // Extract the name of the state
                        string name = line.substr(pos + 7); // +7 to skip past "name="
                        name = name.substr(0, name.find('"'));
                        state[i].setName(name);
                    }

                    // Check if the line contains the abbreviation of the state
                    pos = line.find(" abbreviation=");
                    if (pos != string::npos)
                    {
                        // Extract the abbreviation of the state
                        string abbreviation = line.substr(pos + 15); // +14 to skip past "abbreviation="
                        abbreviation = abbreviation.substr(0, abbreviation.find('"'));
                        state[i].setAbbreviation(abbreviation);
                    }

                    // Check if the line contains the capital of the state
                    pos = line.find(" capital=");
                    if (pos != string::npos)
                    {
                        // Extract the capital of the state
                        string capital = line.substr(pos + 10); // +9 to skip past "capital="
                        capital = capital.substr(0, capital.find('"'));
                        state[i].setCapital(capital);
                    }

                    // Check if the line contains the date of the state
                    pos = line.find("date=");
                    if (pos != string::npos)
                    {
                        // Extract the date of the state
                        string date = line.substr(pos + 6); // +6 to skip past "date="
                        date = date.substr(0, date.find('"'));
                        state[i].setDate(date);
                    }

                    // Check if the line contains the most populous city of the state
                    pos = line.find("most-populous-city=");
                    if (pos != string::npos)
                    {
                        // Extract the most populous city of the state
                        string most_populous_city = line.substr(pos + 20); // +20 to skip past "most-populous-city="
                        most_populous_city = most_populous_city.substr(0, most_populous_city.find('"'));
                        state[i].setMostPopulousCity(most_populous_city);
                    }

                    pos = line.find("population=");
                    if (pos != string::npos)
                    {
                        // Extract the most populous city of the state
                        string population = line.substr(pos + 12); // +12 to skip past "population="
                        population = population.substr(0, population.find('"'));
                        state[i].setPopulation(stringToInt(population));
                    }
                    


                    pos = line.find("square-miles=");
                    if (pos != string::npos)
                    {
                        // Extract the most populous city of the state
                        string square_miles = line.substr(pos + 14); // +13 to skip past "square-miles="
                        square_miles = square_miles.substr(0, square_miles.find('"'));
                        state[i].setSquareMiles(stringToInt(square_miles));
                    }

                    pos = line.find("time-zone-1=");
                    if (pos != string::npos)
                    {
                        // Extract the most populous city of the state
                        string time_zone_1= line.substr(pos + 13); // +11 to skip past "time-zone-1="
                        time_zone_1 = time_zone_1.substr(0, time_zone_1.find('"'));
                        state[i].setTimeZone1(time_zone_1);
                    }


                    pos = line.find("time-zone-2=");
                    if (pos != string::npos)
                    {
                        // Extract the most populous city of the state
                        string time_zone_2= line.substr(pos + 13); // +13 to skip past "time-zone-2="
                        time_zone_2 = time_zone_2.substr(0, time_zone_2.find('"'));
                        state[i].setTimeZone2(time_zone_2);
                    }


                    pos = line.find("dst=");
                    if (pos != string::npos)
                    {
                        // Extract the most populous city of the state
                        string dst= line.substr(pos + 5); // +5 to skip past "most-populous-city="
                        dst = dst.substr(0, dst.find('"'));
                        state[i].setDst(dst);
                    }
                    i++;
                }
                file.close();
            }
            else{
                flgsetter(false);
            }
        }
        ~org(){}; 
       
};



//prototypes
void print(int , State*);


string toLower(string &str)
{
    // Create a new string to store the lowercase version of the input string
    string lowercase = "";

    // Loop to go through the input string and convert each character to lowercase
    for (char c : str)
    {
        // Check if the character is uppercase
        if (c >= 'A' && c <= 'Z')
        {
            // Convert the character to lowercase
            c += 'a' - 'A';
        }

        // Add the character to the lowercase string
        lowercase += c;
    }
    return lowercase;
}

int stringToInt(const string& str){ //function to convert string to integer
    int result = 0;
    for (const char& c : str)
    {
        result = result * 10 + (c - '0'); //equation using ascii values
    }
    return result;
}

void strinput(string input, State*state){ //Check user input for the first query and get the correct index number in the array
    int x =0;
    input = toLower(input);
    if (input == "alabama") x = 1;
    else if (input == "alaska") x = 2;
    else if (input == "arizona") x = 3;
    else if (input == "arkansas") x = 4;
    else if (input == "california") x = 5;
    else if (input == "colorado") x = 6;
    else if (input == "connecticut") x = 7;
    else if (input == "delaware") x = 8;
    else if (input == "florida") x = 9;
    else if (input == "georgia") x = 10;
    else if (input == "hawaii") x = 11;
    else if (input == "idaho") x = 12;
    else if (input == "illinois") x = 13;
    else if (input == "indiana") x = 14;
    else if (input == "iowa") x = 15;
    else if (input == "kansas") x = 16;
    else if (input == "kentucky") x = 17;
    else if (input == "louisiana") x = 18;
    else if (input == "maine") x = 19;
    else if (input == "maryland") x = 20;
    else if (input == "massachusetts") x = 21;
    else if (input == "michigan") x = 22;
    else if (input == "minnesota") x = 23;
    else if (input == "mississippi") x = 24;
    else if (input == "missouri") x = 25;
    else if (input == "montana") x = 26;
    else if (input == "nebraska") x = 27;
    else if (input == "nevada") x = 28;
    else if (input == "new hampshire") x = 29;
    else if (input == "new jersey") x = 30;
    else if (input == "new mexico") x = 31;
    else if (input == "new york") x = 32;
    else if (input == "north carolina") x = 33;
    else if (input == "north dakota") x = 34;
    else if (input == "ohio") x = 35;
    else if (input == "oklahoma") x = 36;
    else if (input == "oregon") x = 37;
    else if (input == "pennsylvania") x = 38;
    else if (input == "rhode island") x = 39;
    else if (input == "south Carolina") x = 40;
    else if (input == "south Dakota") x = 41;
    else if (input == "tennessee") x = 42;
    else if (input == "texas") x = 43;
    else if (input == "utah") x = 44;
    else if (input == "vermont") x = 45;
    else if (input == "virginia") x = 46;
    else if (input == "washington") x = 47;
    else if (input == "west virginia") x = 48;
    else if (input == "wisconsin") x = 49;
    else if (input == "wyoming") x = 50;
    print(x, state); // function to print out the first query, it takes the index number and the array of objects as parameters

}

void print(int x, State* state){
    cout << "State: " <<  state[x].getName() << endl;
    cout << "Abbreviation: " << state[x].getAbbreviation() << endl;
    cout << "Capital: " << state[x].getCapital() << endl;
    cout << "Date of admission: " << state[x].getDate() << endl;
    cout << "Most populous city: " << state[x].getMostPopulousCity() << endl;
    cout << "Population: " << state[x].getPopulation() << endl;
    cout << "Area: " << state[x].getSquareMiles() << " mi2" <<  endl;
    cout << "Time zones: " << state[x].getTimeZone1()<< ", " << state[x].getTimeZone2() << endl;
    cout << "DST: " << state[x].getDst() << endl;
}


void sortStringArray(State*state) //function to sort capitals
{
    int n = 51;
    string *cap2 = new(nothrow) string [n]; //create a new array with the size of the State's array
    string *abb2 = new(nothrow) string [n];

    if(cap2 != nullptr && abb2 != nullptr) //check if the memory was allocated correctly
    {
        for(int i = 0; i < 51; i++){ //copy the capitals and abbriviations into the two new arrays
            cap2[i] = state[i].getCapital();
            abb2[i] = state[i].getAbbreviation();
        }
    
        for (int i = 0; i < n; i++) // Loop through the arrays
        {
            
            for (int j = i + 1; j < n; j++) // Loop through the arrays again starting from the next element
            {
                
                if (cap2[i] > cap2[j]) // Compare the current element with the next element in the capitals array
                {

                    string tempcap = cap2[i];  //swap the current element of the capitals array with the next elements
                    cap2[i] = cap2[j];
                    cap2[j] = tempcap;

                    string tempabb = abb2[i]; //swap the abbreviations according to how the capitals were sorted
                    abb2[i] = abb2[j];
                    abb2[j] = tempabb;
                }
                
            }
            if(i>0){
            cout<< cap2[i] << " (" << abb2[i] <<")" << endl; //print the current array after theyve been sorted
            }
        
        }
        delete [] cap2; //deallocate the memory
        delete [] abb2;
    }    
}


void fiveLargest(State*state) //function to sort and and return five largest states
{
    int n = 51;
    int *fiveSizes = new (nothrow)int [n];
    string *fiveNames = new(nothrow) string [n];

    if(fiveSizes != nullptr && fiveNames !=nullptr)
    {

    
        for(int i = 0; i < 50; i++)
        {
            fiveSizes[i] = state[i].getSquareMiles(); 
            fiveNames[i] = state[i].getName();
        }
            for(int i =0; i < 50; i++) //loops on all the states, 
            {
                for(int j =i+1; j <50; j++) 
                {
                    if(fiveSizes[i] < fiveSizes[j]) //if the state at first index is smaller than 2nd index swap them
                    {
                        swap(fiveSizes[i], fiveSizes[j]);
                        swap(fiveNames[i], fiveNames[j]);
                        
                    }
                }
                
            }

        for(int i =0; i <5; i++)
        {
            cout<< fiveNames[i] <<endl; // print them out
        }    
  
        delete[]fiveNames;
        delete[]fiveSizes;
    }    

}


void sort_dates(State*state) //function to sort the dates 
{
    int n = 51;
    string *dates = new (nothrow)string [n];
    string* name = new (nothrow)string[n];

    if(dates!=nullptr && name!=nullptr)
    {

    
        for(int i = 0; i < 51; i++)
        {
            dates[i] = state[i].getDate();
            name[i] = state[i].getName();
        }
        for (int i=0; i<51; i++) //loop on the dates of the states
        { 
            for(int j=i+1; j<51; j++)
            {
                if( dates[i]> dates[j]) // if the date at the first index is bigger than the date at 2nd index, swap them
                {
                    swap(dates[i], dates[j]);
                    swap(name[i], name[j]);
                }
                
            }
        }
        for (int i=1; i<51; i++)
        {
            cout<<name[i]<<" -> "<<dates[i]<<"\n";
        }
        delete [] dates;
        delete []name;
    }
}

void totalArea(State*state) //function to return the total area of USA
{
    int n = 51;
    int *area = new (nothrow) int [n];

    if(area!=nullptr)
    {

        for(int i = 0; i < 51; i++) //loop on the 50 states
        {
            area[i] = state[i].getSquareMiles(); //get the area of all states
            
        }
        int sum=0;

        for (int i=1; i<51; i++)
        {
            sum += area[i]; //add the area of all states
        }
        cout<<"total area of the USA is: "<<sum <<" mi2"; //prinitng the total area
        delete [] area;
    }
}

void totalPopulation(State*state) //function to return the total population of USA
{
    int n = 51;
    int *population = new (nothrow)int [n];

    if(population !=nullptr)
    {

    
        for(int i = 0; i < 51; i++) //loop on all the 50 states
        {
            population[i] = state[i].getPopulation(); // get the population of all the states
            
        }

        int sum=0;
        for (int i=1; i<51; i++)
        {
            sum += population[i]; // adding the population of all the states together
        }
        cout<<"total population is: "<<sum<<"\n"; //printing them out
        delete[] population;
    }
}

#endif