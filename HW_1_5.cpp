#include<iostream>

using namespace std;

int main()
    {
    double hours, i_water_I, i_fill, i_leak, i_water_F, o_water_I, o_fill, o_leak, o_water_F;

    cout << "How many hours have passed?" << endl;
    cin >> hours;
    
    i_water_I = 10;
    i_fill = .5 * hours;
    i_leak = .2 * hours;
    i_water_F = i_water_I + i_fill - i_leak;
    o_water_I = 14;
    o_fill = .8 * hours;
    o_leak = .3 * hours;
    o_water_F = o_water_I + o_fill - o_leak;

    cout << "The indoor pool has " << i_water_F << " inches of water, and the outdoor pool has " << o_water_F << " inches of water.";
    return 0;
    }