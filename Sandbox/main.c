//
//  main.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 1/20/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include <stdio.h>
#include <limits.h>
#include "htoi/htoi.h"
#define MAXLINE 1000

int main(int argc, const char * argv[]) {
    printf("%d\n", htoi("0xFFffff") == 16777215);
}
