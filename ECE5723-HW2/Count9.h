//
//  Count9.h
//  ECE5723-HW2
//
//  Created by Richard Walker on 10/6/15.
//  Copyright © 2015 Richard Walker. All rights reserved.
//

#ifndef Count9_h
#define Count9_h

/* The interface for the 8-bit comparator */
class Count9 {
    
    /* The inputs */
    char *clk; // clk
    char *rst; // reset
    char *en;  // enable
    
    /* 4-bit output */
    char *o3, *o2, *o1, *o0;
    
public:
    Count9 (); // constructor
    ~Count9(); // destructor
    
    /* Assign the input and output to the comparator */
    void ios(char& c, char& r, char& e,
             char& w, char& x, char& y, char& z);
    
    /* Does the evauluation */
    void evl();
    
    /* Convert from state to output bits */
    void outputCountBits(void);
};


#endif /* Count9_h */
