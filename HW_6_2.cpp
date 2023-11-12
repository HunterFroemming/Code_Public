#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

void compareAttendanceSheet(string first_attendance_file, string second_attendance_file)
{
    ifstream fin; // opens a file
    vector<string> attendance_1;
    vector<string> attendance_2;
    vector<string> final;

    fin.open(first_attendance_file);
    if(fin.is_open())
    {
        string x;
        while (getline(fin, x))
        {
            stringstream ss(x);
            attendance_1.push_back(x);
        }
    }
    else
    {
        cout << "Failed to open attendance files" << endl;
        return;
    }
    fin.close();

    fin.open(second_attendance_file);
    if(fin.is_open())
    {
        string y;
        while (getline(fin, y))
        {
            stringstream SS(y);
            attendance_2.push_back(y);
        }
    }
    else
    {
        cout << "Failed to open attendance files" << endl;
        return;
    }
    int j = 0;
    for (int i = 0; i < int(attendance_1.size()); i++)
    {
        if(attendance_1.size() == attendance_2.size())
        {
            cout << "Every student has boarded the bus. It's time to leave." << endl;
            break;
        }
        else if(attendance_1.at(i) == attendance_2.at(j))
        {
            j++;
        }
        else
        {
            final.push_back(attendance_1.at(i));
            continue;
        }
    }
    if (final.size() > 0)
    {
        cout << "Students yet to board the bus are" << endl;
        for (int i = 0; i < int(final.size()); i++)
        {
            cout << final.at(i) << endl;
        }
    }
    fin.close();
}

int main()
{
    string a;
    string b;
    compareAttendanceSheet(a, b);
    return 0;
}