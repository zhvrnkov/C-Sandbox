//
//  setbits.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 5/15/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include "setbits.h"

unsigned setbits(unsigned x, int p, int n, unsigned y) {
    unsigned rightMostYBits = y & ~(~0 << n);
    return x | (rightMostYBits << (p + 1 - n));
}
