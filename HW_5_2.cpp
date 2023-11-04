#include<iostream>
using namespace std;



double temperatureMean(double new_temperature[], const int TEMP_SIZE)
{
    double mean = 0;
    double sum = 0;
    for(int i = 0; i < TEMP_SIZE; i++)
    {
        sum += new_temperature[i];
    }
    mean = sum / TEMP_SIZE;
    return mean;
}
double temperatureRange(double new_temperature[], const int TEMP_SIZE)
{
    double max = new_temperature[0];
    double min = new_temperature[0];
    double range = 0;
    int count = 0;
    for(int i = 0; i < TEMP_SIZE; i++)
    {
        // find max
        if (new_temperature[i] > max)
        {
            max = new_temperature[i];
        }
        // find min
        if (new_temperature[i] < min)
        {
            min = new_temperature[i];
        }
    }
    range = max - min;
    return range;
}
void temperatureDelta(double new_temperature[], double old_temperature[], double delta[], const int TEMP_SIZE)
{
    int count = 0;
    for(int i = 0; i < TEMP_SIZE; i++)
    {
        delta[count] = old_temperature[i] - new_temperature[i];
        //cout << delta[count] << endl;
        count++;
    }
}
int main()
{
    double delta[] = {};
    double mean = 0;
    double range = 0;
    const int TEMP_SIZE = 3;
    double old_temperature[TEMP_SIZE] = {55.5, 77.7, 88.8};
    double new_temperature[TEMP_SIZE] = {50.5, 67.2, 78.4};

    mean = temperatureMean(new_temperature, TEMP_SIZE);
    cout << mean << endl;
    range = temperatureRange(new_temperature, TEMP_SIZE);
    cout << range << endl;
    temperatureDelta( new_temperature, old_temperature, delta, TEMP_SIZE);
    return 0;
}