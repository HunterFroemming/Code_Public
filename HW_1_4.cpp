#include <iostream>

using namespace std;

int main(){
    // declare all the variable
    double base_1, base_2, height, area;

    // prompt the user & get their input
    cout << "What is the length of one of the parallel sides?" << endl;
    cin >> base_1;
    
    cout << "What is the length of the other parallel side?" << endl;
    cin >> base_2;
    
    cout << "What is the height of the trapezoid?" << endl;
    cin >> height;

    // trapezoid area calculation
    area = .5 * (base_1 + base_2) * height;

    cout << "The trapezoid has an area of " << area << " units." << endl;
    return 0;
}