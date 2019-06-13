//
//  improved_atof.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 6/13/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include "improved_atof.h"

int isdigit(char c) {
    return (c >= '0' && c <= '9');
}

double improved_atof(char str[]) {
    double val, power, number = 1.0;
    int i, sign, exp, expsign;
    
    for(i = 0; str[i] == ' '; i++)
        ;
    sign = (str[i] == '-') ? -1 : 1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    for (val = 0.0; isdigit(str[i]); i++)
        val = val * 10 + (str[i] - '0');
    if (str[i] == '.')
        i++;
    for (power = 1; isdigit(str[i]); i++) {
        val = val * 10 + (str[i] - '0');
        power *= 10;
    }
    
    if (str[i] == 'e' || str[i] == 'E')
        i++;
    expsign = (str[i] == '-') ? -1 : 1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    for (exp = 0; isdigit(str[i]); i++)
        exp = exp * 10 + (str[i] - '0');
    for (int k = 0; k < exp; k++)
        number *= 10;
    if (expsign == -1)
        number = 1/number;
    
    return sign * val / power * number;
}
