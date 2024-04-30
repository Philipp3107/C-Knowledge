//
//  main.c
//  C_Knowledge
//
//  Created by Philipp Kotte on 29.04.24.
//


#include "schnick_funcs.h"

int main(void) {
    
    //initializing random with seed
    char* state = malloc(sizeof(char) * 32);
    initstate( (int)time(NULL) ,state, sizeof(state));
    
    //points for palyer and coomputer
    int player_points = 0, computer_points = 0;
    //choice from player and computer
    char player, computer;
    for(int i = 1; i <= 3; i++){
        
        //printing of the turn header
        printf("Runde %d: Dein Zug ([r]rock, [p]aper, [s]cissors)?  ", i);
        player = getchar();
        fflush(stdin);
        
        //catching invalid input
        if(player != 'r' && player != 's' && player != 'p'){
            printf("Die Auswahl %c ist ungültig. Bitte Wähle erneut.\n", player);
            i--;
        }else{
            computer = get_random_symbol();
            int result = compute_winner(player, computer);
            
            //who won:
            // 0 - player
            // 1 - computer
            // 2 - draw
            if(result == 0){
                ++player_points;
                printf("Du hast gewonnen. Computer: %s | Du: %s. - [%d : %d]\n",
                       translate_token(computer),translate_token(player),
                       computer_points, player_points);
            }else if(result == 1){
                ++computer_points;
                printf("Der Computer hat gewonnen. Computer: %s | Du: %s. - [%d : %d]\n", 
                       translate_token(computer),translate_token(player),
                       computer_points, player_points);
            }else{
                printf("Unentschieden. Computer: %s | Du: %s. - [%d : %d]\n", 
                       translate_token(computer),translate_token(player),
                       computer_points, player_points);
            }
        }
    }
    
    return 0;
    
}
