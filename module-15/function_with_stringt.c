#include <stdio.h>

void function1(char narray[])
{
    printf("%s", narray);
}

int main()
{
    char array[10];
    scanf("%s", array);

    function1(array);

    return 0;
}