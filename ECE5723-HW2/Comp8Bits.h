//
//  Comp8Bits.h
//  ECE5723-HW2
//
//  Created by Richard Walker on 10/4/15.
//  Copyright © 2015 Richard Walker. All rights reserved.
//

#ifndef Comp8Bits_h
#define Comp8Bits_h

/* The interface for the 8-bit comparator */
class Comp8Bits {
    
    /* The 8-bit input for the comparator */
    char *i7, *i6, *i5, *i4, *i3, *i2, *i1, *i0;
    
    /* 1-bit output that goes high if the input is inbetween 100 & 200 */
    char *output;
    
public:
    Comp8Bits (); // constructor
    ~Comp8Bits(); // destructor
    
    /* Assign the input and output to the comparator */
    void ios(char& a, char& b, char& c,
             char& d, char& e, char& f,
             char& g, char& h, char& o);
    
    /* Does the evauluation */
    void evl();
};

#endif /* Comp8Bits_h */


