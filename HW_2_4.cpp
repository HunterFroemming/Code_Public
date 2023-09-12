#include<iostream>
using namespace std;
int main()
{
    double budget;
    char letter;
    double seat_g = 1075.15;
    double seat_b = 1340.96;
    double seat_p = 1684.29;
    double seat_o = 1950.33;

    cout << "What is your budget?" << endl;
    cin >> budget;
    cout << "Which of these seats would you like to take (G, B, P or O)?" << endl;
    cin >> letter;
    if (((letter != 'G') && (letter != 'B') && (letter != 'P') && (letter != 'O')) || (budget < 0))
    {
        cout << "Please enter valid input.";
    }
    else if ((letter == 'G') && ((budget - seat_g) >= 0))
    {
        cout << "Yes, this seat is within your budget!";
    }
    else if ((letter == 'G') && ((budget - seat_g) < 0))
    {
        cout << "Sorry, this seat is outside your budget.";
    }
    else if ((letter == 'B') && ((budget - seat_b) >= 0))
    {
        cout << "Yes, this seat is within your budget!";
    }
    else if ((letter == 'B') && ((budget - seat_b) < 0))
    {
        cout << "Sorry, this seat is outside your budget.";
    }
    else if ((letter == 'P') && ((budget - seat_p) >= 0))
    {
        cout << "Yes, this seat is within your budget!";
    }
    else if ((letter == 'P') && ((budget - seat_p) < 0))
    {
        cout << "Sorry, this seat is outside your budget.";
    }
    else if ((letter == 'O') && ((budget - seat_o) >= 0))
    {
        cout << "Yes, this seat is within your budget!";
    }
    else if ((letter == 'O') && ((budget - seat_o) < 0))
    {
        cout << "Sorry, this seat is outside your budget.";
    }
    return 0;
}