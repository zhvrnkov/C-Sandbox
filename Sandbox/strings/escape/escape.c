//
//  escape.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 5/22/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include "escape.h"

int customEscape(char s[], char t[]) {
    int i, j, c;
    i = j = 0;
    
    while ((c = s[i]) != '\0') {
        switch (c) {
            case '\n':
                t[j] = '\\';
                t[++j] = 'n';
                break;
            case '\t':
                t[j] = '\\';
                t[++j] = 't';
                break;
            default:
                t[j] = s[i];
                break;
        }
        j++;
        i++;
    }
    
    t[j] = '\0';
    
    return 0;
}

int customDeEscape(char s[], char t[]) {
    int i, j, c;
    i = j = 0;
    
    while ((c = s[i]) != '\0') {
        switch (c) {
            case '\\':
                switch (s[++i]) {
                    case 'n':
                        t[j] = '\n';
                        break;
                    case 't':
                        t[j] = '\t';
                        break;
                }
                break;
            default:
                t[j] = s[i];
                break;
        }
        i++;
        j++;
    }
    
    t[j] = '\0';
    
    return 0;
}
