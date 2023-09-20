#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double calculatePaintCost(double area, double paint_grade)
{
    double paint_cost = area*(paint_grade);
    return paint_cost;
}
int main()
{
    double area = 0;
    double paint_grade;
    char grade;
    double answer = 0;
    cout << "Enter area of the four walls (in sq ft)" << endl;
    cin >> area;
    cout << "Select the paint grade (A, B, or C)" << endl;
    cin >> grade;
    if(area <= 0)
    {
        cout << "Please enter a valid input" << endl;
    }
    else
    {
        if((grade == 'A') || (grade == 'a'))
        {
            paint_grade = .75;
            answer = calculatePaintCost(area,paint_grade);
            cout << "The total cost to paint all four walls: $" << answer << endl;
        }
        else if((grade == 'B') || (grade == 'b'))
        {
            paint_grade = 1.25;
            answer = calculatePaintCost(area,paint_grade);
            cout << "The total cost to paint all four walls: $" << answer << endl;
        }
        else if((grade == 'C') || (grade == 'c'))
        {
            paint_grade = 2.75;
            answer = calculatePaintCost(area,paint_grade);
            cout << "The total cost to paint all four walls: $" << answer << endl;
        }
        else
        {
            cout << "Please enter a valid input" << endl;
        }
    }
   return 0; 
}