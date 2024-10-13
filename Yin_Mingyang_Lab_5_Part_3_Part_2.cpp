// Mingyang Michelle Yin
// Oct 8, 2024
// Lab 5 Part 3 part 2

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // setting variables
    int robotMoves = 0;
    int north = 0;
    int east = 0;
    int south = 0;
    int west = 0;
    int totalSteps = 0;

    srand(time(0));

        while (north != 3 || east != 2)
        {
            int direct;
            direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable
            //1 means North, 2 means South, 3 means East and 4 means West

            totalSteps++; // adds up the total amount of steps taken by the robot

            switch (direct)
            {
                case 1:
                    north ++; // adds one to the total going into the north direction
                    break;
                case 2:
                    south ++; // adds one to the total going into the south direction
                    north --; // subtracts one to the total going into the north direction
                    break;
                case 3:
                    east ++; // adds one to the total going into the east direction
                    break;
                case 4:
                    west ++; // adds one to the total going into the west direction
                    east --; // subtracts one to the total going into the east direction
                    break;
            }
        }
    cout << "The robot took a total of " << totalSteps << " steps to get 3 blocks north and 2 blocks east.";
    // tells the user how many steps the robot needed to take to get to 3 blocks north and 2 blocks east.
    // I could not figure out how to get the code to run 10 times and find the average in the code so I did it manually.

    return 0;
}

/*
    //OUTPUT//

The robot took a total of 7 steps to get 3 blocks north and 2 blocks east.
The robot took a total of 261427 steps to get 3 blocks north and 2 blocks east.
The robot took a total of 58401 steps to get 3 blocks north and 2 blocks east.
The robot took a total of 2327 steps to get 3 blocks north and 2 blocks east.
The robot took a total of 4605 steps to get 3 blocks north and 2 blocks east.
The robot took a total of 261895 steps to get 3 blocks north and 2 blocks east.
The robot took a total of 5223 steps to get 3 blocks north and 2 blocks east.
The robot took a total of 39 steps to get 3 blocks north and 2 blocks east.
The robot took a total of 2637 steps to get 3 blocks north and 2 blocks east.
The robot took a total of 181 steps to get 3 blocks north and 2 blocks east.
The robot took a total of 261917 steps to get 3 blocks north and 2 blocks east.

The average amount of steps taken is 85865 steps.

*/


