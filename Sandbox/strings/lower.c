//
//  lower.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 5/15/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include "lower.h"

int lower(int c) {
    return (c >= 'A' &&  c <= 'Z') ? (c + 'a' - 'A') : c;
}
