#include<iostream>
#include<cmath>
using namespace std;

double calculateWallArea(double length, double width)
{
    const double height = 10.00;
    double total_wall_area = (2*(width*height)) + (2*(length*height));
    return total_wall_area;
}

double calculatePaintCost(double area, double paint_grade)
{
    double paint_cost = area*(paint_grade);
    return paint_cost;
}

double estimatePaintingTime(double area, double painter)
{
    double paint_time = area / painter;
    return paint_time;
}

int main()
{
    int option;
    cout << "Choose an option" << endl;
    cout << "1. Calculate Exterior Wall Area" << endl;
    cout << "2. Calculate Paint Cost" << endl;
    cout << "3. Estimate Painting Time" << endl;
    cout << "4. Exit" << endl;
    cin >> option;
    if (option == 1)
    {
        double length = 0;
        double width = 0;
        double answer = 0;
        cout << "Enter length of the base of the house (in ft)" << endl;
        cin >> length;
        cout << "Enter width of the base of the house (in ft)" << endl;
        cin >> width;

        if((length <= 0) || (width <=0))
        {
            cout << "Please enter a valid input" << endl;
        }
        else
        {
            answer = calculateWallArea(length,width);
            cout << "The total area of all the four walls: " << answer << " sq ft";
        }
        return 0;
    }
    else if(option == 2)
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
    else if(option == 3)
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
    else if(option == 4)
    {
        cout << "Thank you!" << endl;
    }
    else
    {
        cout << "Please enter a valid input" << endl;
    }
    return 0;
}