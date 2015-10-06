//
//  Count9.cpp
//  ECE5723-HW2
//
//  Created by Richard Walker on 10/6/15.
//  Copyright © 2015 Richard Walker. All rights reserved.
//

#include <iostream>
#include "Count9.h"

/* The states of the counter */
#define got_0000 0
#define got_0001 1
#define got_0010 2
#define got_0011 3
#define got_0100 4
#define got_0101 5
#define got_0110 6
#define got_0111 7
#define got_1000 8
#define got_1001 9

int current_state = 0, next_state = 0;

/* Gets the next state */
void getNextState(void);

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
    
    std::cout << "The rst address is: " << rst << "\n";
    std::cout << "The rst value is: " << *rst << "\n";
    
    std::cout << "The en address is: " << en << "\n";
    std::cout << "The en value is: " << *en << "\n";
    
    /* Start in 0000 */
    current_state = got_0000;
    
    /* If reset is active, go to 0000 */
    if (*rst == '1') {
        current_state = got_0000;
    }
    /* If the counter is enabled */
    else if (*en == '1') {
        
        /* If rising edge, or to next state */
        if (*clk == 'P') {
            getNextState();
            current_state = next_state;
        }
        else {
            current_state = current_state;
        }
        
    }
    /* Not enabled, so keep current state */
    else{
        current_state = current_state;
    }
    
    outputCountBits();
    
    std::cout << "The output bits are: " << *o3 << *o2 << *o1 << *o0 << "\n";
    
}

/* Convert from the states into the output bits */
void Count9::outputCountBits(){
    
    switch (current_state) {
        case got_0000:
            *o3 = '0';
            *o2 = '0';
            *o1 = '0';
            *o0 = '0';
            break;
            
        case got_0001:
            *o3 = '0';
            *o2 = '0';
            *o1 = '0';
            *o0 = '1';
            break;
            
        case got_0010:
            *o3 = '0';
            *o2 = '0';
            *o1 = '1';
            *o0 = '0';
            break;
            
        case got_0011:
            *o3 = '0';
            *o2 = '0';
            *o1 = '1';
            *o0 = '1';
            break;
            
        case got_0100:
            *o3 = '0';
            *o2 = '1';
            *o1 = '0';
            *o0 = '0';
            break;
        
        case got_0101:
            *o3 = '0';
            *o2 = '1';
            *o1 = '0';
            *o0 = '1';
            break;
        
        case got_0110:
            *o3 = '0';
            *o2 = '1';
            *o1 = '1';
            *o0 = '0';
            break;
        
        case got_0111:
            *o3 = '0';
            *o2 = '1';
            *o1 = '1';
            *o0 = '1';
            break;
            
        case got_1000:
            *o3 = '1';
            *o2 = '0';
            *o1 = '0';
            *o0 = '0';
            break;
            
        case got_1001:
            *o3 = '1';
            *o2 = '0';
            *o1 = '0';
            *o0 = '1';
            break;
        
        default:
            *o3 = '0';
            *o2 = '0';
            *o1 = '0';
            *o0 = '0';
            break;
    }
    
}

/* Determines what the next state should be */
void getNextState(){
    
    switch (current_state) {
        case got_0000:
            next_state = got_0001;
            break;
            
        case got_0001:
            next_state = got_0010;
            break;
            
        case got_0010:
            next_state = got_0011;
            break;
        
        case got_0011:
            next_state = got_0100;
            break;
            
        case got_0100:
            next_state = got_0101;
            break;
        
        case got_0101:
            next_state = got_0110;
            break;
            
        case got_0110:
            next_state = got_0111;
            break;
        
        case got_0111:
            next_state = got_1000;
            break;
        
        case got_1000:
            next_state = got_1001;
            break;
            
        case got_1001:
            next_state = got_0000;
            break;
            
        default:
            next_state = got_0000;
            break;
    }
    
}
