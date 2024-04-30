//
//  erlaubt.c
//  StrictAliasingRule
//
//  Created by Philipp Kotte on 30.04.24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 99;
    char* cp = (char*) &i;
    *cp = 5;
    return 0;
}
