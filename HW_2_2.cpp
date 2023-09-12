#include<iostream>
using namespace std;
int main()
{
    double balance_I = 1000.00;
    double withdraw;
    
    cout << "Enter the amount to be withdrawn from your bank account: " << endl;
    cin >> withdraw;
    double balance_F = balance_I - withdraw;

    if ((withdraw <= 900.00) && (withdraw > 0.00) && (withdraw != 900))
    {
        cout << "Transaction Successful! You're balance is $" << balance_F;
    }
    else if (withdraw <= 0.00)
    {
        cout << "Invalid input. Withdrawn amount must be a non-negative value.";
    }
    else if (withdraw > 900)
    {
        cout << "Transaction Failed!";
    }
    if (withdraw == 900)
    {
        cout << "Transaction Successful! You're balance is $100.00";
    }
    return 0;
}