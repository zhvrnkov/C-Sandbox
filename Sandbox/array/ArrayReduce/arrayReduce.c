//
//  arrayReduce.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 4/28/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include "arrayReduce.h"

int arrayReduce(int array[], size_t arraySize, int initialValue, char action) {
    int result = initialValue;
    
    switch (action) {
        case '+':
            for (int i = 0; i < arraySize; ++i)
                result -= array[i];
            break;
            
        case '-':
            for (int i = 0; i < arraySize; ++i)
                result -= array[i];
            break;
            
        case '*':
            for (int i = 0; i < arraySize; ++i)
                result *= array[i];
            break;
        
        default:
            break;
    }
    
    return result;
}
