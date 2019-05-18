//
//  detab.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 1/20/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include "detab.h"
#define TAB_SIZE 1

char *detab(char input[]) {
    int i, j;
    i = j = 0;
    char *output = malloc(sizeof(char) * 1000);
    
    while(input[i] != '\0') {
        if (input[i] == '\t') {
            for (int n = 0; n < TAB_SIZE; ++n, ++j) {
                output[j] = ' ';
            }
        } else {
            output[j] = input[i];
            ++j;
        }
        
        i++;
    }
    
    return output;
}
