//
//  invert.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 5/15/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include "invert.h"

unsigned invert(unsigned x, int p, int n) {
    unsigned xorMask = ~(~0 << n) << (p + 1 - n);
    return x ^ xorMask;
}
