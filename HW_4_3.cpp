#include<iostream>
using namespace std;

int manageFeeder(int feeder, int days);


int main()
{
    
    
    int days_1 = 0;
    int days_2 = 0;
    int days_3 = 0;
    
    
    cout << "How many days ago was feeder 1 filled?" << endl;
    cin >> days_1;
    if(days_1 <= 0)
    {
        cout << "Invalid input!" << endl;
        return 0;
    }
    else
    {
        cout << "How many days ago was feeder 2 filled?" << endl;
        cin >> days_2;
    }
    if(days_2 <= 0)
    {
        cout << "Invalid input!" << endl;
        return 0;
    }
    else
    {
        cout << "How many days ago was feeder 3 filled?" << endl;
        cin >> days_3;
    }
    if(days_3 <= 0)
    {
        cout << "Invalid input!" << endl;
        return 0;
    }
    if((days_1 > 0) && (days_2 > 0) && (days_3 > 0))
    {
        int r_1 = manageFeeder(1, days_1);
        int r_2 = manageFeeder(2, days_2);
        int r_3 = manageFeeder(3, days_3);
        cout << "Feeder 1 will need to be filled in " << r_1 << " days, feeder 2 will need to be filled in "<< r_2 << " days, and feeder 3 will need to be filled in " << r_3 << " days." << endl;
    }
    
    return 0;
}

int manageFeeder(int feeder, int days)
{
    
    if(feeder == 1)
    {
        int remainder = ((21 - ((3)*days)) / 3);
        if(remainder <= 0)
        {
            remainder = 0;
        }
        return remainder;
    }
    else if(feeder == 2)
    {
        int remainder = ((37 - ((2)*days)) / 2);
        if(remainder <= 0)
        {
            remainder = 0;
        }
        return remainder;
    }
    else if(feeder == 3)
    {
        int remainder = ((17 - ((4)*days)) / 4);
        if(remainder <= 0)
        {
            remainder = 0;
        }
        return remainder;
    }
    return 0;
}

