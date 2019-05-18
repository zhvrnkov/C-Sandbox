//
//  arraymanipulation.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 1/21/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include "arraymanipulation.h"

void arraymanipulation(int arr[]) {
    
    int copyarr = *arr;
    
    arr = copyarr;
    
    for (int i = 0; i < sizeof(arr); i++) {
        arr[i] = i * 10;
        printf("%d-", i * 10);
    }
    printf("\n");
    
}
