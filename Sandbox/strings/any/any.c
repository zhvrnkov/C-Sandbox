//
//  any.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 5/8/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include "any.h"

int any(char s1[], char s2[]) {
    int result, i;
    
    result = -1;
    
    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == s2[0]) {
            int j = 1;
            int n = i;
            n++;
            int contain = 0;
            result = i;
            
            while (s1[n] == s2[j] || s2[j] == '\0') {
                if (s2[j] == '\0') {
                    contain = 1;
                    break;
                }
                n++; j++;
            }
            
            if (contain)
                break;
            else
                result = -1;
        }
    }
    
    
    return result;
}
