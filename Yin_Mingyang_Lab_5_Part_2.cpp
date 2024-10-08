// Mingyang Michelle Yin
// Oct 8, 2024
// Lab 5 Part 2

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double gigabytes;
    char musicQuality;

    
    cout << "How many gigabytes are in your hotspot plan: "; // Asking the user how many gigabytes they have
    cin >> gigabytes;
    cout << "What music quality do you want to download (l for low quality, n for normal quality, or h for high quality): ";
    cin >> musicQuality;
    cout << endl;

    double megabytes = gigabytes * 1000; // Changing gigabytes into megabytes

    double lowQ;
    double normalQ;
    double highQ;

    switch (musicQuality)
    {
    case 'l':
        lowQ = megabytes / 43.2; // Hours of low qulity music
        cout << "You can listen to " << fixed << setprecision(1) << lowQ << " hours of low quality music" << endl; // Telling the user they can listen to x hours of low qulity music
        break;
    case 'n':
        normalQ = megabytes / 72; // Hours of normal qulity music
        cout << "You can listen to " << fixed << setprecision(1) << normalQ << " hours of normal quality music" << endl; // Telling the user they can listen to x hours of normal qulity music
        break;
    case 'h':
        highQ = megabytes / 115.2; // Hours of high qulity music
    cout << "You can listen to " << fixed << setprecision(1) << highQ << " hours of high quality music" << endl; // Telling the user they can listen to x hours of high qulity music
        break;

    default:
        cout << "Invaild, please try again"; // telling the user that the symbol is invalid and to try again
    }


    return 0;
}


/*
    //OUTPUT//
   
How many gigabytes are in your hotspot plan: 5.6
What music quality do you want to download (l for low quality, n for normal quality, or h for high quality): n

You can listen to 77.8 hours of normal quality music

*/