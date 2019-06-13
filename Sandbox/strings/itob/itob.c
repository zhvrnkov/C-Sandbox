//
//  itob.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 5/28/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include "itob.h"

void myitob(int num, char s[], int base, int blanks) {
    int i = 0;
    int isPositive = num > 0;
    
    do {
        int temp = num % base;
        char c;
        if (!isPositive) {
            temp *= -1;
        }
        if (temp > 10) {
            c = 'A' + temp - 10;
        } else {
            c = temp + '0';
        }
        for (int j = 0; j < blanks; j++) 
            s[i++] = ' ';
        s[i++] = c;
        
    } while((num /= base) != 0);
    if (!isPositive)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}
