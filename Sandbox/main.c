//
//  main.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 1/20/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include <stdio.h>
#include <limits.h>
#include "any/any.h"
#define MAXLINE 1000

int main(int argc, const char * argv[]) {
    char s1[] = "ABCD";
    char s2[] = "AC";
    
    printf("%d\n", any(s1, s2));
}
