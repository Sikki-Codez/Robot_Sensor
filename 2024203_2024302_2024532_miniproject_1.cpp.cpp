#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>
#include "Mylib.h"
using namespace std;

// main function
int main()
{
    int sensors[4];    // Array of four distance sensors
    string labels[4];  // Array of labels for each sensors
    int dir;           // Indicates which direction to go next
    srand(time(NULL)); // Random number generator
    labels[0] = "north";
    labels[1] = "west";
    labels[2] = "south";
    labels[3] = "east";
    for (int i = 0; i < 5; i++) // simulates 5 moves by the robot
    {
        getSensors(sensors);                      // get values for all the sensors
        printSensors(sensors, labels);            // print out the sensor values
        dir = furthest(sensors);                  // find the directions that is furthest from an obstacle
        cout << "moving " << labels[dir] << endl; // "go"
    }
    return 0;
} // end of main function