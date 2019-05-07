//
//  htoi.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 5/7/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include "htoi.h"

int isDigit(char c) {
    return (c >= '0' && c <= '9');
}

int isSmallHexLetter(char c) {
    return (c >= 'a' && c <= 'f');
}
            
int isCapitalHexLetter(char c) {
    return  (c >= 'A' && c <= 'F');
}

int isHexChar(char c) {
    return isDigit(c) || isSmallHexLetter(c) || isCapitalHexLetter(c);
}

int htoi(const char hexString[]) {
    char hex[sizeof(int) * 2 + 1];
    int i, j;
    i = j = 0;
    
    if (hexString[0] == '0' && (hexString[1] == 'x' || hexString[1] == 'X'))
        for (i = 2; hexString[i] != '\0' && i < sizeof(int) * 2 + 2 && isHexChar(hexString[i]); i++)
            hex[i - 2] = hexString[i];
    else
        for (i = 0; hexString[i] != '\0' && i < sizeof(int) * 2 && isHexChar(hexString[i]); i++)
            hex[i] = hexString[i];
    
    hex[i] = '\0';
    
    int result = 0;
    
    while (hex[j] != '\0') {
        if (isDigit(hex[j])) {
            result = result * 10 + (hex[j] - '0');
        } else if (isSmallHexLetter(hex[j])) {
            result = result * 16 + (hex[j] - 'a' + 10);
        } else {
            result = result * 16 + (hex[j] - 'A' + 10);
        }
        j++;
        printf("%d\n", result);
    }
    
    return result;
}
