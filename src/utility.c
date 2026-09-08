#include <stdio.h>
#include "utility.h"

int get_int(char* prompt)
{
    int problems;
    printf("%s ", prompt);
    scanf("%d", &problems);
    return problems;
}