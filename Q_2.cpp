#include<iostream>
using namespace std;
int main()
{
    double water_i = 64;
    double water_drank;
    double water_r;
    cout << " Your goal is to drink 64 fl oz of water today." << endl;
    cout << "How much water have you drank today?: ";
    cin >> water_drank;
    water_r = water_i - water_drank;
    
    if(water_drank < 0)
    {
        cout << "Please enter valid input.";
    }
    else if((water_drank <= 32) && (water_drank >= 0))
    {
        cout << "You're very, very dehydrated! Get the water in! You have " << water_r << " fl oz left to drink.";
    }
    else if((water_drank > 32) && (water_drank < 64))
    {
        cout << "You're doing great, but you're still halfway to your goal! Get that water in! You have " << water_r << " fl oz left to drink.";
    }
    else if(water_drank >= 64) 
    {
        cout << "You've hit your goal for the day! Great job getting hydrated!";
    }
    return 0;
}