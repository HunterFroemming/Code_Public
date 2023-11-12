#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>

using namespace std;

int split(string input_string, char separator, string arr[], int arr_size)
{
    int i = 0;
    string split;
    stringstream ss(input_string);
    while(getline(ss, split, separator))
    {   
        i++;
        if (i >= arr_size + 1)
        {
            return -1;
        }
        arr[i] = split;
    }
    return i;
}

int main()
{
    string testcase = "Bangkok,Berlin,Birmingham,Bogota,Busan,Baton Rouge,Beaumont,Boise,Budapest";;
    char separator = ',';
    const int arr_size = 5;
    string arr[arr_size];
    // num_splits is the value returned by split
    int num_splits = split(testcase, separator, arr, arr_size);
    cout << "Function returned value: " << num_splits << endl;
}