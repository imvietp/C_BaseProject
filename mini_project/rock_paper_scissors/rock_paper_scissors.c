// ROCK, PAPER, SCISSORS

// Comment: Including necessary header files
#include <stdio.h>
#include <string.h>

int main() {
    char player1[50];
    char player2[50];

    printf("Welcome to the game!!!\n");
    
    printf("Player 1: ");
    scanf("%s", player1);

    printf("Player 2: ");
    scanf("%s", player2);

    if ((strcmp(player1, "paper") == 0 && strcmp(player2, "rock") == 0) ||
        (strcmp(player1, "rock") == 0 && strcmp(player2, "scissors") == 0) ||
        (strcmp(player1, "scissors") == 0 && strcmp(player2, "paper") == 0))
    {
        printf("Player 1 wins!\n");
    }
    else if ((strcmp(player1, "rock") == 0 && strcmp(player2, "paper") == 0) ||
             (strcmp(player1, "scissors") == 0 && strcmp(player2, "rock") == 0) ||
             (strcmp(player1, "paper") == 0 && strcmp(player2, "scissors") == 0))
    {
        printf("Player 2 wins!\n");
    }
    else {
        printf("It's a draw!\n");
    }

    return 0;
}

