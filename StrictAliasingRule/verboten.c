//
//  main.c
//  StrictAliasingRule
//
//  Created by Philipp Kotte on 30.04.24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 99;
    float* fp = (float*) &i;
    *fp += 0.7f;
    return 0;
}
