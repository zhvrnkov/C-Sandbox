//
//  any.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 5/8/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include "any.h"

int any(char s[], char t[]) {
    int i, j, k;
    
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0') {
            return i;
        }
    }
    return -1;
}

int rightmostany(char s[], char t[]) {
    int i, j, k, index;
    
    index = -1;
    
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0') {
            index = i;
        }
    }
    return index;
}
