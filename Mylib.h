#ifndef MYLIB_H
#define MYLIB_H

#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int SenseDistance()
{
    return rand() % 101; // Generate a random distance between 0 and 100
}

void getSensors(int sensors[]) // this function gives the randim distance to the sensor using sensedistance function
{
    for (int i = 0; i < 4; i++) /* We have used for loop with max val of 4 to assign
        4 random vaues to the 4 sensors using SenseDistance function */
    {
        sensors[i] = SenseDistance();
    }
}

// Function to print sensor distances along with their labels
void printSensors(int sensors[], string labels[]) /* this function is used to print
 the values for the distance of the sensors and their corroponding labels north,
 south, east, west  */
{
    cout << "sensors = ";
    for (int i = 0; i < 4; i++) // used for loop to print all 4 labels north, south, east, west
    {
        cout << "[" << labels[i] << "=" << sensors[i] << "]";
    }
    cout << endl;
}

// Function to find the index of the furthest distance
int furthest(int sensors[])
{
    int maxIndex = 0; // starts from the first label to be maximum
    for (int i = 1; i < 4; i++)
    {
        if (sensors[i] > sensors[maxIndex])
        {
            maxIndex = i;
        }
    }
    return maxIndex; // return the largest value
}

#endif // MYLIB_H