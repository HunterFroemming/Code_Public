#include<iostream>
#include<cmath>
using namespace std;

double estimatePaintingTime(double area, double painter)
{
    double paint_time = area / painter;
    return paint_time;
}

int main()
{
    double area = 0;
    double painter = 0;
    char painter_grade;
    double answer = 0;
    cout << "Enter area of the four walls (in sq ft)" << endl;
    cin >> area;
    cout << "Select a painter (W, X, Y or Z)" << endl;
    cin >> painter_grade;
    if(area <= 0)
    {
        cout << "Please enter a valid input" << endl;
    }
    else 
    {
        if((painter_grade == 'W') || (painter_grade == 'w'))
        {
            painter = 25;
            answer = estimatePaintingTime(area,painter);
            cout << "The time taken to paint all four walls by painter W: " << answer << " hours" << endl;
        }
        else if((painter_grade == 'X') || (painter_grade == 'x'))
        {
            painter = 18;
            answer = estimatePaintingTime(area,painter);
            cout << "The time taken to paint all four walls by painter X: " << answer << " hours" << endl;
        }
        else if((painter_grade == 'Y') || (painter_grade == 'y'))
        {
            painter = 24;
            answer = estimatePaintingTime(area,painter);
            cout << "The time taken to paint all four walls by painter Y: " << answer << " hours" << endl;
        }
        else if((painter_grade == 'Z') || (painter_grade == 'z'))
        {
            painter = 28;
            answer = estimatePaintingTime(area,painter);
            cout << "The time taken to paint all four walls by painter Z: " << answer << " hours" << endl;
        }
        else
        {
            cout << "Please enter a valid input" << endl;
        }
    }
    return 0;
}