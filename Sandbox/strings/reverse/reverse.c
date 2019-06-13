//
//  reverse.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 5/26/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include "reverse.h"

unsigned stringLength(const char s[]) {
    unsigned int i = 0;
    while (s[i] != '\0')
        i++;
    
    return i;
}

int reverse(char s[]) {
    unsigned i = 0;
    unsigned length = stringLength(s);
    unsigned iterations = length / 2;
    
    while (i < iterations) {
        char c = s[i];
        s[i] = s[(length - 1) - i];
        s[(length - 1) - i] = c;
        
        i++;
    }
    
    return 0;
}
