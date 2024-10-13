// Mingyang Michelle Yin
// Oct 8, 2024
// Lab 5 Part 3

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // setting variables
    int i = 0; // robotMoves
    int north = 0;
    int east = 0;
    int south = 0;
    int west = 0;

    srand(time(0));
        //part 1

    for (i;i=25;i++)
    {
        int direct;
        direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable
        //1 means North, 2 means South, 3 means East and 4 means West
    
        switch (direct)
        {
            case 1:
                north += 1; // adds one to the total going into the north direction
                break;
            case 2:
                south += 1; // adds one to the total going into the south direction
                break;
            case 3:
                east += 1; // adds one to the total going into the east direction
                break;
            case 4:
                west += 1; // adds one to the total going into the west direction
                break;
        }
    }
    cout << "The robot is " << north << " blocks north, " << east << " blocks east, " << south << " blocks south, and " << west << " blocks west from the start."; 
    // telling the user how far the robot has moved in each direction

    return 0;
}

/*

    //OUTPUT//
    
    The robot is 7 blocks north, 7 blocks east, 5 blocks south, and 6 blocks west from the start.
    
    */