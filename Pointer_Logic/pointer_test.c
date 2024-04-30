//
//  pointer_test.c
//  Pointer_Logic
//
//  Created by Philipp Kotte on 30.04.24.
//

#include <stdio.h>

int main(void){
    
    /*
     char* size = 1byte
     int*  size = 4byte
     long* size = 8byte
     
     
     adress if int i:
     [ ca , fe , ba , be ]
     
     char* bp = [ xx ]
     */
    
    /*
     
    -----------------------
     int i = 0 {
     
     [ be , ba , fe , ca ]
     [ bp ]
     }
     
     -----------------------
     int i = 1 {
     
     [ be , ba , fe , ca ]
          [ bp ]
     }
     
     -----------------------
     int i = 2 {
     
     [ be , ba , fe , ca ]
               [ bp ]
     }
     
     -----------------------
     int i = 3 {
     
     [ be , ba , fe , ca ]
                    [ bp ]
     }
     */
    
    typedef unsigned char byte;
    
    
    int i = 0xcafebabe;
    
    //byte* bp = adress of i casted to byte*
    byte* bp = (byte*) &i;

    //while bp is smaller than
    while (bp < (byte*)&i + 4) {
      printf("%x \n", *bp & 0xff);
      bp++;
    }
    
    return 0;
}
