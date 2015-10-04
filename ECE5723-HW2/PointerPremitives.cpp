//
//  PointerPremitives.cpp
//  ECE5723-HW2
//
//  Created by Richard Walker on 10/4/15.
//  Copyright © 2015 Richard Walker. All rights reserved.
//

#include <stdio.h>

void _and (char a, char b, char & w)
{
    w = ((a=='0')||(b=='0')) ? '0':
    ((a=='1')&&(b=='1')) ? '1':
    'X';
}

void _or (char a, char b, char  & w)
{
    w = ((a=='1')||(b=='1')) ? '1':
    ((a=='0')&&(b=='0')) ? '0':
    'X';
}

void _not (char a, char & w)
{
    w = (a=='1') ? '0':
    (a=='0') ? '1':
    'X';
}

void _xor (char a, char b, char &w)
{
    w = (a==b) ? '0':
    (a!=b) ? '1':
    'X';
}

void tri (char a, char c, char & w)
{
    w = (c=='1') ? a : 'Z';
}

void resolve (char a, char b, char & w)
{
    w = (a=='Z' || a==b) ? b :
    (b=='Z')         ? a :
    'X';
}

void _and (char* a, char* b, char* w)
{
    int i=0;
    do {
        _and (*(a+i), *(b+i), *(w+i));
        i++;
    } while (*(a+i) != '\0');
    *(w+i) = '\0';
}

void _or (char *a, char *b, char *w)
{
    int i=0;
    do {
        _or (*(a+i), *(b+i), *(w+i));
        i++;
    } while (*(a+i) != '\0');
    *(w+i) = '\0';
}

void _not (char *a, char *w)
{
    int i=0;
    do {
        _not (*(a+i), *(w+i));
        i++;
    } while (*(a+i) != '\0');
    *(w+i) = '\0';
}

void _xor (char *a, char *b, char *w)
{
    int i=0;
    do {
        _xor (*(a+i), *(b+i), *(w+i));
        i++;
    } while (*(a+i) != '\0');
    *(w+i) = '\0';
}

void tri (char *a, char *c, char *w)
{
    int i=0;
    do {
        tri (*(a+i), *(c+i), *(w+i));
        i++;
    } while (*(a+i) != '\0');
    *(w+i) = '\0';
}

void resolve (char *a, char *b, char *w)
{
    int i=0;
    do {
        resolve (*(a+i), *(b+i), *(w+i));
        i++;
    } while (*(a+i) != '\0');
    *(w+i) = '\0';
}