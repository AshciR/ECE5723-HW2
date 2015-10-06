//
//  main.cpp
//  ECE5723-HW2
//
//  Created by Richard Walker on 10/4/15.
//  Copyright © 2015 Richard Walker. All rights reserved.
//

#include <iostream>
#include "GateClasses.h"
#include <string>
#include "Count9.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    char clk('P'), rst, en;
    char w, x, y, z;
    
    Count9 * cnter = new Count9;
    
    cnter->ios(clk, rst, en, w, x, y, z);
    cnter->evl();
    
//    And *andGate = new And();
//    
//    andGate->ios(in1, in2, out);
//    
//    cout << "Enter in1: "; cin >> in1;
//    cout << "Enter in2: "; cin >> in2;
//    
//    andGate->evl();
//    
//    cout << "The output is: " << out << "\n";
    
    return 0;
}
