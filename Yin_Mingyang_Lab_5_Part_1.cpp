// Mingyang Michelle Yin
// Oct 8, 2024
// Lab 5 Part 1

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // variable setting
    double duration;
    double weight;
    double sMet = 2; // MET value for walking slowly
    double qMet = 3; // MET value for walking quickly 
    double jMet = 8.8; // MET value for jogging
    char metSymbol; 
    
    cout << "Please insert exercise duration (in minutes): "; // finding how long the user is exersicing
    cin >> duration;
    cout << "Please insert weight (in kilogram): "; // finding how much the user weighs
    cin >> weight;
    cout << "What type of excerise did the user particpate in (s for walking slowly, q for walking quickly, and j for jogging): "; // asking the user what exercise they have done
    cin >> metSymbol;
    cout << endl;

    double totalCalBurn;

    switch (metSymbol)
    {
        case 's':
            totalCalBurn = duration * ( sMet * 3.5 * weight ) /200; // Math to find calories burned for walking slowly
            cout << "Total calories burned by walking slowly is: " << totalCalBurn << endl; // telling the user the calories burned for walking slowly
            break;
        case 'q':

            totalCalBurn = duration * ( qMet * 3.5 * weight ) /200; // Math to find calories burned for walking quickly
            cout << "Total calories burned by walking quickly is: " << totalCalBurn << endl; // telling the user the calories burned for walking quickly
            break;
        case 'j':
            totalCalBurn = duration * ( jMet * 3.5 * weight ) /200; // Math to find calories burned for jogging
            cout << "Total calories burned by jogging is: " << totalCalBurn << endl; // telling the user the calories burned for jogging
            break;
        default:
            cout << "Invaild, please try again"; // telling the user that the symbol is invalid and to try again

    }

    cout << endl;

    // extra credit //

    double calBurn;

    cout << "How many calories does the user want to burn: "; // asking the user how many calories they want to burn
    cin >> calBurn;
    cout << "Please insert weight (in kilogram): "; // finding how much the user weighs
    cin >> weight;
    cout << "What type of excerise does the user particpate in (s for walking slowly, q for walking quickly, and j for jogging): "; // asking the user what exercise they want to do
    cin >> metSymbol;
    cout << endl;

    cout << fixed << setprecision(1);

    switch (metSymbol)
    {
        case 's':
            duration = (calBurn * 200) / ( sMet * 3.5 * weight ) ; // Math to find time needed to burn x calories by walking slowly
            cout << "To burn " << calBurn << " walking slowly takes " << duration << " minutes" << endl; // telling the user how long they have to walk slowly to burn x calories
            break;
        case 'q':
            duration = (calBurn * 200) / ( qMet * 3.5 * weight ) ; // Math to find time needed to burn x calories by walking quickly
            cout << "To burn " << calBurn << " walking slowly takes " << duration << " minutes" << endl; // telling the user how long they have to walk quickly to burn x calories
            break;
        case 'j':
            duration = (calBurn * 200) / ( jMet * 3.5 * weight ) ; // Math to find time needed to burn x calories by jogging
            cout << "To burn " << calBurn << " walking slowly takes " << duration << " minutes" << endl; // telling the user how long they have to jogging to burn x calories
            break;
        default:
            cout << "Invaild, please try again"; // telling the user that the symbol is invalid and to try again
    }
    return 0;
}

/*
    //OUTPUT//

Please insert exercise duration (in minutes): 20
Please insert weight (in kilogram): 18
What type of excerise did the user particpate in (s for walking slowly, q for walking quickly, and j for jogging): j

Total calories burned by jogging is: 55.44

How many calories does the user want to burn: 200
Please insert weight (in kilogram): 20
What type of excerise does the user particpate in (s for walking slowly, q for walking quickly, and j for jogging): q

To burn 200.0 walking slowly takes 190.5 minutes

*/