//
//  main.cpp
//  PRG-2-20-How-Much-Paint
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  A particular brand of paint covers 340 square feet per gallon. Write a program to
//  determine and report approximately how many gallons of paint will be needed to paint
//  two coats on a wooden fence that is 6 feet high and 100 feet long.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    // Define constants
    const int INT_FEET_PER_GALLON = 340;
    const int INT_HEIGHT = 6;
    const int INT_WIDTH = 100;
    
    // Define variables
    int intFenceArea;
    float fltGallonsNeeded;
    
    // Calculate variables from given constants
    intFenceArea = INT_HEIGHT * INT_WIDTH;
    fltGallonsNeeded = static_cast<float>(intFenceArea) / static_cast<float>(INT_FEET_PER_GALLON);
    
    // Configure for single point of decimal precision
    cout << setprecision(1) << fixed << showpoint;
    
    // Output to console
    cout << "You will need " << fltGallonsNeeded << " gallons\n";
    cout << "to paint a fence 6 feet high and 100 feet long\n";
    
    return 0;
}
