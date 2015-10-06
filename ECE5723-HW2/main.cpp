//
//  main.cpp
//  ECE5723-HW2
//
//  Created by Richard Walker on 10/4/15.
//  Copyright © 2015 Richard Walker. All rights reserved.
//

#include <iostream>
#include "Count9.h"

using namespace std;

// Prototypes
void showCounterWorking(void);

int main(int argc, const char * argv[]) {
    
    showCounterWorking();
        
    return 0;
}

void showCounterWorking(void){
    
    char clk('P'), rst('1'), en('0');
    char w, x, y, z;
    
    /* Instantiate the counter */
    Count9 * cnter = new Count9;
    
    /* Pass inputs and outputs */
    cnter->ios(clk, rst, en, w, x, y, z);
    
    cout << "Clk:" << clk << " Reset:" << rst << " En:" << en << "\n";
    cnter->evl();
    cout << "Counter:" << w << x << y << z << "\n";

    /* Turn reset off and enable on */
    rst = '0';
    en = '1';
    
    cout << "\nTurned reset off...\n\n";
    cout << "Clk:" << clk << " Reset:" << rst << " En:" << en << "\n";
    cnter->evl();
    cout << "Counter:" << w << x << y << z << "\n";
    
    /* Start counting */
    for (int i = 0; i < 10; i++) {
        
        cout << "Clk:" << clk << " Reset:" << rst << " En:" << en << "\n";
        cnter->evl();
        cout << "Counter:" << w << x << y << z << "\n";

    }
    
}
