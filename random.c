#include <stdio.h>
#include <stdlib.h>

char randchar()
{
    int letter = 65 + (rand() % 26);
    return letter;
} 