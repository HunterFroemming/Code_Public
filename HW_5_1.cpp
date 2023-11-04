#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    string card_names[] = {"Ace", "Clubs", "Diamonds", "Hearts", "Spades", "Jack", "Queen", "King", "Joker"};
    for (int i = 0; i < 9; i ++)
    {
        cout << card_names[i] << endl;
    }
    double sq_root_nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        sq_root_nums[i] = sqrt(sq_root_nums[i]);
        cout << fixed << setprecision(3) << sq_root_nums[i] << endl;
    }
    int counter = 0;
    int numbers[7] = {};
    for (int i = 50; i < 100; i++)
    {
        if(i % 7 == 0)
        {
            numbers[counter] = i;
            cout << numbers[counter] << endl;
            counter++;
            continue;
        }
    }
    int counter2 = 0;
    char letters[52] = {};
    for (char i = 65; i < 92; i++)
    {
        while(i != 91)
        {
            letters[counter2] = i;
            cout << letters[counter2] << endl;
            i = i + 32;
            counter2++;
            letters[counter2] = i;
            cout << letters[counter2] << endl;
            i = i - 31;
            counter2++;
            continue;
        }
    }
    return 0;
}