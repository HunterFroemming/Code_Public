#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double calculateDistance(double x_1, double y_1, double x_2, double y_2, int distance_type)
{
    double equation = 0;
    if (distance_type == 1)
    {
        equation = abs(x_2 - x_1) + abs(y_2 - y_1);
        return equation;
    }
    else if (distance_type == 2)
    {
        equation = sqrt((pow((x_2 - x_1), 2)) + (pow((y_2 - y_1), 2)));
        return equation;
    }
    return equation;
}

int main()
{
    int distance_type = 0;
    double x_1 = 0;
    double y_1 = 0;
    double x_2 = 0;
    double y_2 = 0;
    cout << "Enter distance type: " << endl;
    cin >> distance_type;
    if ((distance_type == 1) || (distance_type == 2))
    {
        cout << "Enter x1: " << endl;
        cin >> x_1;
        cout << "Enter y1: " << endl;
        cin >> y_1;
        cout << "Enter x2: " << endl;
        cin >> x_2;
        cout << "Enter y2: " << endl;
        cin >> y_2;
        double result = calculateDistance(x_1, y_1, x_2, y_2, distance_type);
        cout << "The distance between the points is: " << fixed << setprecision(3) << result << endl;
    }
    else
    {
        cout << "Invalid distance type!" << endl;
    }
    
    return 0;
}
