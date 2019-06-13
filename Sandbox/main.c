#include <stdio.h>
#include "strings/improved_atof/improved_atof.h"

int main(int argc, char *argv[]) {
    printf("%f\n", improved_atof("12.3e1"));
    
    return 0;
}
