//
//  PointerPremitives.h
//  ECE5723-HW2
//
//  Created by Richard Walker on 10/4/15.
//  Copyright © 2015 Richard Walker. All rights reserved.
//

#ifndef PointerPremitives_h
#define PointerPremitives_h


#endif /* PointerPremitives_h */

void and (char a, char b, char & w);
void or (char a, char b, char & w);
void not (char a, char & w);
void tri (char a, char c, char & w);
void resolve (char a, char c, char & w);

void and (char* a, char* b, char* w);
void or (char *a, char *b, char *w);
void not (char *a, char *w);
void tri (char *a, char *c, char *w);
void resolve (char *a, char *b, char *w);