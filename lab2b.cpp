/*
    Filename: lab2b.cpp
    Authors: Trey Owen and Lucas
    Date: 05 September 2023
    Purpose: Do arithmetic to get a good grade
*/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    const int SURVEYED = 16500;
    const double USE_ENERGY_DRINKS = .15;
    const double PERFER_CITRUS = .58;

    cout << "Num of people who drink more than one a week: " << 
    round(SURVEYED * USE_ENERGY_DRINKS) << endl;
    return 0;
}