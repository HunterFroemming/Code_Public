#include<iostream>
#include<cmath>
using namespace std;

void calculateDistanceMatrix(double distance[][3], double clue[][2], double region [][2], const int CLUE_ROWS, const int CLUE_COLS, const int REG_ROWS, const int REG_COLS)
{
    for (int i = 0; i < CLUE_ROWS; i++)
    {
        for(int j = 0; j < REG_ROWS; j++)
        {
            distance[i][j] = sqrt((pow((region[j][0] - clue[i][0]), 2)) + (pow((region[j][1] - clue[i][1]), 2)));
        }
    }
}