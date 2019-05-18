//
//  bitcount.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 5/15/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include "bitcount.h"

int bitcount(unsigned x) {
    int b;
    
    while (x != 0) {
        x &= (x - 1);
        b++;
    }
    
    return b;
}
