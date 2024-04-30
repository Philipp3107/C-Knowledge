//
//  schnick_funcs.c
//  C_Knowledge
//
//  Created by Philipp Kotte on 29.04.24.
//

#include "schnick_funcs.h"




// return a random symbol
int get_random_symbol(void){
    
    //int generated as random of [0, 1, 2]
    int r = random() % 3;
    
    switch (r) {
        case 0:
            return ROCK;
        case 1:
            return PAPER;
        case 2:
            return SCISSORS;
        default:
            printf("Recursive call of get_random-symbol()\n");
            return get_random_symbol();
    }
}

// translates the given char into ist correlating String
char* translate_token(char token){
    switch (token) {
        case 'r':
            return "ROCK";
        case 'p':
            return "PAPER";
        case 's':
            return "SCISSORS";
        default:
            return translate_token(token);
    }
}


//computes the winner
int compute_winner(char player, char computer){
    if(player == computer){
        return 2;
    }else{
        if((player == ROCK     && computer == SCISSORS) ||
           (player == SCISSORS && computer == PAPER   ) ||
           (player == PAPER    && computer == ROCK    )  )
        {
            return 0;
        }else {
            return 1;
        }
    }
}
