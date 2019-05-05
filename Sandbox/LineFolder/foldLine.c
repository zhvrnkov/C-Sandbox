//
//  foldLine.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 5/6/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include "foldLine.h"
#include "../NotEmptyChar/nonBlankChar.h"
#include <stdlib.h>
#define LINE_LENGTH 10

char *foldLine(char input[]) {
    char *output = (char*)malloc(sizeof(char) * 1000);
    
    int i, j, toggle;
    i = j = toggle = 0;
    
    
    while (input[i] != '\0') {
        if (i % LINE_LENGTH == 0 && i != 0)
            toggle = 1;
        
        output[j] = input[i];
        
        if (toggle && isBlankChar(input[i])) {
            j++;
            output[j] = '\n';
            toggle = 0;
        }
        
        j++;
        i++;
    }
    
    output[j] = '\0';
    
    return output;
}
