//
//  deleeze.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 5/8/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include "deleeze.h"

void deleeze(char s1[], char s2[]) {
    int i, j;
    
    for (i = j = 0; s1[i] != '\0'; i++) {
        int contain = 0;
        
        for (int n = 0; s2[n] != '\0'; n++) {
            if (s2[n] == s1[i]) {
                contain = 1;
                break;
            }
        }
        
        if (!contain)
            s1[j++] = s1[i];
    }
    
    s1[j] = '\0';
}
