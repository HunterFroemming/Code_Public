#include<iostream>
using namespace std;
int main()
{
    int rate;
    cout << "What is the traffic flow rate on the highway?" << endl;
    cin >> rate;

    if (rate >= 800)
    {
        cout << "You're gonna make it to the concert on time.";
    }
    else if ((rate < 800)  && (rate > 0))
    {
        cout << "You're gonna be late to the concert.";
    }
    else
    {
        cout << "Invalid traffic flow rate.";
    }
    return 0;
}