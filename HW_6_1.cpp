#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

void listCountries(string filename)
{
    // initialize variables
    ifstream file(filename); // opens a file
    vector<string> countries;
    string country;

    if(file.is_open())
    {
        // Fill in the blank below with code to read from file and store in the countries vector
        string x;
        while (getline(file, x))
        {
            stringstream ss(x);
            countries.push_back(x);
        }

        cout << "List of countries in the file are" << endl;    
        for(int i = 0; i < int(countries.size()); i++)
        {
            cout << countries.at(i) << endl;
        }
    }
    else
    {
        cout << "Failed to open file" << endl;
    }
    file.close();
}

int main()
{
    string filename;
    cout << "Enter countries filename" << endl;
    cin >> filename;
    listCountries(filename);
    return 0;
}