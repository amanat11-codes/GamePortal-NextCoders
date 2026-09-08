#include<stdio.h>
#include "games.h"

int main()
{
    while (1)
    {
        printf("Welcome to GamePortal! Brough to you by NextCoders.\nChoose the game you want to play:\n");
        printf("1. Find the Sum\n");
        printf("2. Random Words\n");
        printf("3. Snake Game\n");
        
        printf("0. Exit\n");

        int choice;
        scanf("%d", &choice);

        switch(choice)
        {
            case 0:
                return 0;
                break;
            case 1:
                play_FindTheSum();
                break;
            case 2:
                play_RandomWords();
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                return 0;
        }
        
    }

}