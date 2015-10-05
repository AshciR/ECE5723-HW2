//
//  GateClasses.h
//  ECE5723-HW2
//
//  Created by Richard Walker on 10/4/15.
//  Copyright © 2015 Richard Walker. All rights reserved.
//

#ifndef GateClasses_h
#define GateClasses_h

class And {
    char *i1, *i2, *o1;
public:
    And (); // constructor
    ~And(); // destructor
    void ios(char& a, char& b, char& w);
    void evl();
};

class Or {
    char *i1, *i2, *o1;
public:
    Or (); // constructor
    ~Or(); // destructor
    void ios(char& a, char& b, char& w);
    void evl();
};

class Not {
    char *i1, *o1;
public:
    Not ();
    ~Not(); // destructor
    void ios(char& a, char& w);
    void evl ();
};

class Xor {
    char *i1, *i2, *o1;
public:
    Xor ();
    ~Xor(); // destructor
    void ios(char& a, char& b, char& w);
    void evl();
};

#endif /* GateClasses_h */

