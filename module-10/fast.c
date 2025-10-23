#include <stdio.h>
#include <string.h>

int main()
{
    char array[20];

    // fgets(arrayName, size, stdin); this (size  = index + 1)-> that means -> 0,1,2...
    fgets(array, 20, stdin);

    printf("%s\n", array);

    return 0;
}