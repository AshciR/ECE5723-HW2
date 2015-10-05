//
//  Comp8Bits.cpp
//  ECE5723-HW2
//
//  Created by Richard Walker on 10/4/15.
//  Copyright © 2015 Richard Walker. All rights reserved.
//

#include <stdio.h>
#include "Comp8Bits.h"
#include "GateClasses.h"

/* The constructor */
Comp8Bits::Comp8Bits() {}

void Comp8Bits::ios(char&a,
                    char&b,
                    char&c,
                    char&d,
                    char&e,
                    char&f,
                    char&g,
                    char&h,
                    char&o)
{
    
    i7 = &a;
    i6 = &b;
    i5 = &c;
    i4 = &d;
    i3 = &e;
    i2 = &f;
    i1 = &g;
    i0 = &h;
    output = &o;
    
}

/* The Comparator implementation */
void Comp8Bits::evl () {
    
    /* Array to hold all the Not gates */
    Not* not_array[8];
    
    /* Array to hold all the And gates */
    And* and_array[15];
   
}