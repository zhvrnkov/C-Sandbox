//
//  entab.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 5/5/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include "entab.h"
#define TAB_SIZE 4

char *entab(char input[]) {
    int i, j;
    i = j = 0;
    
    char *output = malloc(sizeof(char) * 1000);
    
    while (input[i] != '\0') {
        if (input[i] == ' ') {
            
            // Find out how many spaces are in front
            int numberOfSpaces = 0;
            while (input[i] == ' ') {
                numberOfSpaces += 1;
                i++;
            }
            
            // If bigger or equal to TAB_SIZE, then need to insert tabs
            if (numberOfSpaces >= TAB_SIZE) {
                int numberOfTabs = numberOfSpaces / TAB_SIZE;
                for (int n = 0; n < numberOfTabs; n++, j++) {
                    output[j] = '\t';
                }
                if (numberOfSpaces % TAB_SIZE) {
                    for (int n = 0; n < numberOfSpaces % TAB_SIZE; n++, j++) {
                        output[j] = ' ';
                    }
                }
            } else  // Else insert current space ang go further
                for (int n = 0; n < numberOfSpaces; ++n, ++j)
                    output[j] = ' ';
        } else {
            output[j] = input[i];
            j++;
            i++;
        }
    }
    
    output[j] = '\0';
    
    return output;
}
