#include <stdio.h>
#include <stdlib.h>

char randchar()
{
    char letter = 'A' + (random() % 26);
    return letter;
} 