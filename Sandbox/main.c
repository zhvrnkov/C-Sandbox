#include <stdio.h>
#include <stdlib.h>
#include "strings/expand/expand.h"

int main(int argc, char *argv[]) {
    char s1[] = "7-9";
    char s2[50];
    
    expand(s1, s2);
    
    printf("%s\n", s2);
}
