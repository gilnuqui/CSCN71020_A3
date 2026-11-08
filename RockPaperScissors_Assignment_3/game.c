#include "game.h"
#include <string.h>

void determineWinner(const char player1[], const char player2[], char result[])
{
    if (strcmp(player1, "Rock") == 0 &&
        strcmp(player2, "Scissors") == 0)
    {
        strcpy_s(result, 10, "Player1");
    }
}