#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utility.h"
#include "gameManager.h"
#include "helpers.h"

extern int REWARD;
extern int LOSS;

void greetUser()
{
    printf("Welcome to Find the Sum!\nYou will be given some simple math problems. Getting the right answer rewards you with %d points, and getting a wrong answer deducts %d points.\nLet's see how well you can perform!", REWARD, LOSS);
}

void generateProblems()
{
    int count = get_int("How many problems would you like to attempt?");
    srand(time(0));

    for (int i = 0; i < count; i++)
    {
        int n1 = (rand() % 10) + 1;
        int n2 = (rand() % 10) + 1;
        int op = (rand() % 3) + 1;

        makeQuestion(n1, op, n2);

        int answer;
        scanf("%d", &answer);

        int solution = getSolution(n1, op, n2);
    
        pointsManager(answer, solution);

        printf("\n");
    }
}

int getSolution(int num1, int op, int num2)
{
    int solution;
    switch(op)
    {
        case 1:
            solution = num1 + num2;
            break;
        case 2:
            solution = num1 - num2;
            break;
        case 3:
            solution = num1 * num2;
            break;
    }
    return solution;
}

void makeQuestion(int num1, char operator, int num2)
{
    char ch;
    switch(operator)
    {
    case 1:
        ch = (char)'+';
        break;
    case 2:
        ch = (char)'-';
        break;
    case 3:
        ch = (char)'x';
        break;
    }

    printf("%d %c %d = ? Ans: ", num1, ch, num2);

}

