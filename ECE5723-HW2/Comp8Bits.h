//
//  Comp8Bits.h
//  ECE5723-HW2
//
//  Created by Richard Walker on 10/4/15.
//  Copyright © 2015 Richard Walker. All rights reserved.
//

#ifndef Comp8Bits_h
#define Comp8Bits_h


#endif /* Comp8Bits_h */

#include "Wire.h"

/* The interface for the 8-bit comparator */
class Comp8Bits {
    
    /* The 8-bit input for the comparator */
    Wire *i7, *i6, *i5, *i4, *i3, *i2, *i1, *i0;
    
    /* 1-bit output that goes high if the input is inbetween 100 & 200 */
    Wire *output;
    
public:
    Comp8Bits (); // constructor
    ~Comp8Bits(); // destructor
    
    /* Assign the input and output to the comparator */
    void ios(Wire& a7, Wire& a6, Wire &a5, Wire& a4,
             Wire& a3, Wire &a2, Wire& a1, Wire &a0,
             Wire& ou)
    {
        i7 = &a7;
        i6 = &a6;
        i5 = &a7;
        i4 = &a6;
        i3 = &a7;
        i2 = &a6;
        i1 = &a7;
        i0 = &a6;
        output = &ou;
        i6 = &a6;
    }
    
    void evl();
};
