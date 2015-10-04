//
//  main.cpp
//  ECE5723-HW2
//
//  Created by Richard Walker on 10/4/15.
//  Copyright © 2015 Richard Walker. All rights reserved.
//

#include <iostream>
#include "GateClasses.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    char in1('X'), in2('X'), out('X');
    
    And* andGate;
    andGate = new And();
    
    andGate->ios(in1, in2, out);
    
    cout << "Enter in1: "; cin >> in1;
    cout << "Enter in2: "; cin >> in2;
    
    andGate->evl();
    
    cout << "The output is: " << out << "\n";
    
    return 0;
}
