//
//  schnick_funcs.h
//  C_Knowledge
//
//  Created by Philipp Kotte on 29.04.24.
//

#ifndef schnick_funcs_h
#define schnick_funcs_h

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define ROCK 'r'
#define PAPER 'p'
#define SCISSORS 's'

// returns a random symbol
int get_random_symbol(void);
// returns the winner
int compute_winner(char player, char computer);
//translates a char to its corresponding symbol
char* translate_token(char token);





#endif /* schnick_funcs_h */
