#include<stdio.h>
#include "helpers.h"
#include "utility.h"
#include "gameManager.h"

int main(void)
{
    greetUser();
    printf("\n");
    while(1)
    {
        printf("Would you like to start a new game? (y/n): ");
        char c;
        scanf("%c", &c);
        
        if (c != 'y')
        break;
        
        newGame();
        generateProblems();
        
        showPoints();
        while(c = getchar() != '\n');
    }

    printf("Exiting game... Hope you had a great experience!");

    return 0;
}