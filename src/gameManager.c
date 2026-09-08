#include<stdio.h>
#include "gameManager.h"

static int score = 0;
const int REWARD = 5;
const int LOSS = 3;

void pointsManager(int answer, int solution)
{
    if (answer == solution)
    {
        score += REWARD;
        printf("Correct! You get %d points. Current score is %d", REWARD, score);
    } else
    {
        score -= LOSS;
        printf("Incorrect! You lost %d points. Current score is %d", LOSS, score);
    }
}

void showPoints()
{
    printf("Score: %d\n", score);
}

void newGame()
{
    score = 0;
}