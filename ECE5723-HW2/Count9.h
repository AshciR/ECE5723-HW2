//
//  Count9.h
//  ECE5723-HW2
//
//  Created by Richard Walker on 10/6/15.
//  Copyright © 2015 Richard Walker. All rights reserved.
//

#ifndef Count9_h
#define Count9_h

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

/* The interface for the 8-bit comparator */
class Count9 {
    
    /* The inputs */
    char *clk; // clk
    char *rst; // reset
    char *en;  // enable
    
    /* 4-bit output */
    char *o3, *o2, *o1, *o0;
    
    /* State info */
    int current_state = 0, next_state = 0;
    
    /* Pointers to the state */
    int * c_state = &current_state;
    int * n_state = &next_state;
    
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
    
    /* Gets the next state */
    void getNextState(void);

};


#endif /* Count9_h */
