#include<stdio.h>
#include "helpers.h"
#include "utility.h"
#include "gameManager.h"
#include "games.h"

int play_FindTheSum(void)
{
    greetUser();
    printf("\n");
    while(1)
    {
        char c;
        while((c = getchar()) != '\n');
        printf("Would you like to start a new game? (y/n): ");

        scanf("%c", &c);
        
        if (c != 'y')
        break;
        
        newGame();
        generateProblems();
        
        showPoints();
        printf("\n");
    }

    printf("Exiting game... Hope you had a great experience!\n");

    return 0;
}