#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    
    double bill;
    double days;
    char car_type;
    cout << "Which car type ( A, B, C, or D ) would you like to rent?" << endl;
    cin >> car_type;
    cout << "How many days would you like to rent this car?" << endl;
    cin >> days;
    double A = 100.00 + (15.00*days);
    double B = 150.00 + (20.00*days);
    double C = 200.00 + (25.00*days);
    double D = 250.00 + (30.00*days);
    if (((car_type != 'A') && (car_type != 'B') && (car_type != 'C') && (car_type != 'D')) || (days < 0))
    {
        cout << "Please enter valid input.";
    }
    else if (car_type == 'A')
    {
        bill = 1.09*A;
        cout << "Your bill total is $" << fixed << setprecision(2) << bill;
    }
    else if (car_type == 'B')
    {
        bill = 1.09*B;
        cout << "Your bill total is $" << fixed << setprecision(2) << bill;
    }
    else if (car_type == 'C')
    {
        bill = 1.09*C;
        cout << "Your bill total is $" << fixed << setprecision(2) << bill;
    }
    else if (car_type == 'D')
    {
        bill = 1.09*D;
        cout << "Your bill total is $" << fixed << setprecision(2) << bill;
    }
    
    return 0;
}