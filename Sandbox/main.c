//
//  main.c
//  Sandbox
//
//  Created by Vlad Zhavoronkov on 1/20/19.
//  Copyright © 2019 Vlad Zhavoronkov. All rights reserved.
//

#include <stdio.h>
#include "grabline/grabline.h"
#include "LineFolder/foldLine.h"
#include "CommentsCleaner/cleanComments.h"
#define MAXLINE 1000

int main(int argc, const char * argv[]) {
    int len;
    char line[MAXLINE];
    
    while ((len = grabline(line, MAXLINE)) > 0) {
        printf("%s", cleanComments(line));
    }
}
