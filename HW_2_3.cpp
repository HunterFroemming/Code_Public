#include<iostream>
using namespace std;
int main()
{
    int temp;
    int wind_speed;
    cout << "What is tomorrow's temperature looking like?" << endl;
    cin >> temp;
    cout << "What is tomorrow's wind speed looking like?" << endl;
    cin >> wind_speed;
    if ((temp >= 20) && (temp <= 30) && (wind_speed <=50) && (wind_speed >= 0))
    {
        cout << "The weather conditions are ideal for skiing tomorrow.";
    }
    else if ((temp < 0) || (wind_speed < 0))
    {
        cout << "Please enter valid input.";
    }
    else
    {
        cout << "The weather conditions are not ideal for skiing tomorrow.";
    }
    return 0;
}
