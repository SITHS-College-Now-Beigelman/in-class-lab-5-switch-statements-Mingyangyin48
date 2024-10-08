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
    int robotMoves = 0;
    int north = 0;
    int east = 0;
    int south = 0;
    int west = 0;

    srand(time(0));
        //part 1

    for (robotMoves;robotMoves<25;robotMoves++)
    {
        int direct;
        direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable
        //1 means North, 2 means South, 3 means East and 4 means West
    
        switch (direct)
        {
            case 1:
                north += 1;
                break;
            case 2:
                south += 1;
                break;
            case 3:
                east += 1;
                break;
            case 4:
                west += 1;
                break;
        }
    }
    cout << "The robot is " << north << " blocks north, " << east << " blocks east, " << south << " blocks south, and " << west << " blocks west from the start.";

    return 0;
}


/*

    //OUTPUT//
    
    The robot is 7 blocks north, 7 blocks east, 5 blocks south, and 6 blocks west from the start.
    
    */