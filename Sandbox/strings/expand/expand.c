//
//  expand.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 5/22/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include "expand.h"
#define isExpandable(c) (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')

int expand(char s1[], char s2[]) {
    int i, j, c;
    i = j = 0;
    
    while ((c = s1[i]) != '\0') {
        if (c == '-') {
            int lower = s1[i - 1];
            int upper = s1[i + 1];
            int range = (upper - 1) - lower;
            
            if (isExpandable(lower) && isExpandable(upper) && range > 0) {
                for (int z = 1; z <= range; z++, j++) {
                    s2[j] = lower + z;
                }
            }
        } else {
            s2[j] = s1[i];
            j++;
        }
        i++;
    }
    
    s2[j] = '\0';
    
    return 0;
}
