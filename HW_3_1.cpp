#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int age;
    double income;
    double tax = 0;
    cout << "What is your age?" << endl;
    cin >> age;
    if((age < 60) && (age > 0))
    {
        cout << "What is your income?" << endl;
        cin >> income;
        if((income < 50000.00) && (income >= 0.00))
        {
            double tax = .1*(income);
            cout << "You are required to pay $" << tax << " in taxes" << endl;
        }
        else if (income >= 50000.00)
        {
            double tax = .2*(income);
            cout << "You are required to pay $" << tax << " in taxes" << endl;
        }
        else
        {
            cout << "Neither age nor income can be zero" << endl;
        }

    }
    else if(age >= 60)
    {
        cout << "What is your income?" << endl;
        cin >> income;
        if((income < 20000.00) && (income >= 0))
        {
            cout << "You are not required to pay taxes" << endl;
        }
        else if(income >= 20000.00)
        {
            double tax = .05*(income);
            cout << "You are required to pay $" << tax << " in taxes" << endl;
        }
        else
        {
            cout << "Income can't be negative." << endl;
        }
    }
    else 
    {
        cout << "Age can't be 0" << endl;
    }
    return 0;
}