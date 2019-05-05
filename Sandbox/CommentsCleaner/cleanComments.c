//
//  cleanComments.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 5/6/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include "cleanComments.h"
#include <stdlib.h>

char *cleanComments(char input[]) {
    int i, j, currenlyInString, currenlyInChar;
    i = j = currenlyInString = currenlyInChar = 0;
    
    char *output = (char*)malloc(sizeof(char) * 1000);
    
    while (input[i] != '\0') {
        
        if (input[i] == '"')
            currenlyInString = !currenlyInString;
        else if (input[i] == '\'')
                 currenlyInChar = !currenlyInChar;
        
        if (!(currenlyInChar || currenlyInString) && input[i] == '/' && input[i + 1] == '/') {
            while (input[i] != '\n')
                i++;
            i++;
        }
        
        output[j] = input[i];
        
        j++;
        i++;
    }
    
    output[j] = '\0';
    
    return output;
}
