//
//  GateClasses.cpp
//  ECE5723-HW2
//
//  Created by Richard Walker on 10/4/15.
//  Copyright © 2015 Richard Walker. All rights reserved.
//

#include <stdio.h>
#include "GateClasses.h"
#include "PointerPremitives.h"


// And implementation
And::And() {}

void And::ios(char& a, char& b, char& w) {
    i1 = &a;
    i2 = &b;
    o1 = &w;
}

void And::evl () {
    if ((*i1=='0')||(*i2=='0')) *o1='0';
    else if ((*i1=='1')&&(*i2=='1')) *o1='1';
    else *o1='X';
}

// Or Implementation
Or::Or() {}

void Or::ios(char& a, char& b, char& w){
    i1 = &a;
    i2 = &b;
    o1 = &w;
}

void Or::evl () {
    if ((*i1=='1')||(*i2=='1')) *o1='1';
    else if ((*i1=='0')&&(*i2=='0')) *o1='0';
    else *o1='X';}


// Not Implementation
Not::Not() {}

void Not::ios(char& a, char& w){
    i1 = &a;
    o1 = &w;
}

void Not::evl () {
    if (*i1=='0') *o1='1';
    else if (*i1=='1') *o1='0';
    else *o1='X';
}

// Xor Implementation
Xor::Xor() {}

void Xor::ios(char& a, char& b, char& w){
    i1 = &a;
    i2 = &b;
    o1 = &w;
}

void Xor::evl () {
    if ((*i1=='X')||(*i2=='X')||(*i1=='Z')||(*i2=='Z')) *o1='X';
    else if (*i1==*i2) *o1='0';
    else *o1='1';
}