#include<iostream>
#include<iomanip>
using namespace std;
void calculateAndDisplayDiet(int current_day, double previous_days_feed);
int main()
{
    int current_day = 0;
    double previous_days_feed = 0.00;
    cout << "What day is it today? Enter a number from 0 to 6: " << endl;
    cin >> current_day;
    if (current_day == 0)
    {
        calculateAndDisplayDiet(0, previous_days_feed);
    }
    else if (current_day == 1)
    {
        calculateAndDisplayDiet(1, previous_days_feed);
    }
    else if (current_day == 2)
    {
        calculateAndDisplayDiet(2, previous_days_feed);
    }
    else if (current_day == 3)
    {
        calculateAndDisplayDiet(3, previous_days_feed);
    }
    else if (current_day == 4)
    {
        calculateAndDisplayDiet(4, previous_days_feed);
    }
    else if (current_day == 5)
    {
        calculateAndDisplayDiet(5, previous_days_feed);
    }
    else if (current_day == 6)
    {
        calculateAndDisplayDiet(6, previous_days_feed);
    }
    else
    {
        cout << "Invalid input!" << endl;
        return 0;
    }
    cout << "How much was Ralphie fed yesterday? Enter an amount in MCals: " << endl;
    cin >> previous_days_feed;
    
    if (previous_days_feed < 0)
    {
        cout << "Invalid input!" << endl;
    }
    return 0;
}
void calculateAndDisplayDiet(int current_day, double previous_days_feed)
{
    double food_in_2__days = 35.00;
    double current_days_feed_max = 35.00 - previous_days_feed;
    if (current_day == 2 || 5 || 6)
    {
        if (previous_days_feed > 18.5)
        {
            cout << "Ralphie was fed too much yesterday!" << endl;
        }
        else 
        {
            cout << "Ralphie should be fed at least 16.50 and at most " << fixed << setprecision(2) << current_days_feed_max << " MCals of food today." << endl;
        }
    }
    else
    {
        if (previous_days_feed > 22.5)
        {
            cout << "Ralphie was fed too much yesterday!" << endl;
        }
        else
        {
            cout << "Ralphie should be fed at least 12.50 and at most " << fixed << setprecision(2) << current_days_feed_max << " MCals of food today." << endl;
        }
    }
}