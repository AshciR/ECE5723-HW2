//
//  Count9.cpp
//  ECE5723-HW2
//
//  Created by Richard Walker on 10/6/15.
//  Copyright © 2015 Richard Walker. All rights reserved.
//

#include <iostream>
#include "Count9.h"

Count9::Count9() {}

void Count9::ios(char& c, char& r, char& e,
                 char& w, char& x, char& y, char& z){
    // Inputs
    clk = &c;
    rst = &r;
    en  = &e;
    
    // Outputs
    o3 = &w;
    o2 = &x;
    o1 = &y;
    o0 = &z;
    
}

void Count9::evl(){
    
    std::cout << "The clk address is: " << clk << "\n";
    std::cout << "The clk value is: " << *clk << "\n";
}
