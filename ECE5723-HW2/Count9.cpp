//
//  Count9.cpp
//  ECE5723-HW2
//
//  Created by Richard Walker on 10/6/15.
//  Copyright © 2015 Richard Walker. All rights reserved.
//

#include "Count9.h"

/* Constructor */
Count9::Count9() {}

/* Input/Output */
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

/* Evaluation */
void Count9::evl(){
    
    /* If reset is active, go to 0000 */
    if (*rst == '1') {
        *c_state = got_0000;
    }
    /* If the counter is enabled */
    else if (*en == '1') {
        
        /* If rising edge, or to next state */
        if (*clk == 'P') {
            getNextState();
            *c_state = *n_state;
        }
        else {
            *c_state = *c_state;
        }
        
    }
    /* Not enabled, so keep current state */
    else{
        *c_state = *c_state;
    }
    
    outputCountBits();
    
}

/* Convert from the states into the output bits */
void Count9::outputCountBits(){
    
    switch (*c_state) {
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
void Count9::getNextState(){
    
    switch (*c_state) {
        case got_0000:
            *n_state = got_0001;
            break;
            
        case got_0001:
            *n_state = got_0010;
            break;
            
        case got_0010:
            *n_state = got_0011;
            break;
        
        case got_0011:
            *n_state = got_0100;
            break;
            
        case got_0100:
            *n_state = got_0101;
            break;
        
        case got_0101:
            *n_state = got_0110;
            break;
            
        case got_0110:
            *n_state = got_0111;
            break;
        
        case got_0111:
            *n_state = got_1000;
            break;
        
        case got_1000:
            *n_state = got_1001;
            break;
            
        case got_1001:
            *n_state = got_0000;
            break;
            
        default:
            *n_state = got_0000;
            break;
    }
    
}
