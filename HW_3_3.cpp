#include<iostream>
#include<cmath>
using namespace std;


double calculateWallArea(double length, double width)
{
    const double height = 10.00;
    double total_wall_area = (2*(width*height)) + (2*(length*height));
    return total_wall_area;
}
int main()
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