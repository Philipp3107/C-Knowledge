//
//  pointer_test.c
//  Pointer_Logic
//
//  Created by Philipp Kotte on 30.04.24.
//

#include <stdio.h>

int main(void){
    
    typedef unsigned char byte;
    
    
    int i = 0xcafebabe;
    
    byte* bp = (byte*) &i;

    while (bp < (byte*)&i + 4) {
      printf("%x ", *bp & 0xff);
      bp++;
    }
    
    return 0;
}
