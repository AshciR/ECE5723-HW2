//
//  Wire.h
//  ECE5723-HW2
//
//  Created by Richard Walker on 10/4/15.
//  Copyright © 2015 Richard Walker. All rights reserved.
//

#ifndef Wire_h
#define Wire_h


#endif /* Wire_h */

class Wire {
public:
    char value;
    int eventTime;
    int activityCount=0;
public:
    Wire(char c, int d) : value(c), eventTime(d) {}
    Wire(){};
    void put(char a, int d) { value = a; eventTime = d; }
    void get(char& a, int& d) { a = value; d = eventTime; }
    int activity() { return activityCount; }
};
