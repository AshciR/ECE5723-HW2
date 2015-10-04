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

/* The Comparator implementation */
void Comp8Bits::evl () {
    
    /* We split the 8 bit input into 2 4-bit subgroups, A3-0 and B3-0 */
    
    /* The A subgroup */
    Wire *a3, *a2, *a1, *a0;
    
    /* The B subgroup */
    Wire *b3, *b2, *b1, *b0;
}