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
    
    while (i < lim - 1 && (c = getchar()) != EOF) {
        output[i] = c;
        i++;
        if (c == '\n')
            break;
    }

    output[i] = '\0';
    
    return c;
}
