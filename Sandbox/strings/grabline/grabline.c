//
//  getline.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 4/22/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include "grabline.h"

int grabline(char output[], int lim) {
    int i, c;
    i = c = 0;
    
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        output[i++] = c;

    if (c == '\n')
        output[i++] = c;
    
    output[i] = '\0';
    
    return i;
}
