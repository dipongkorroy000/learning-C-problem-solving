#include <stdio.h>

int main()
{
    char array[1000001];

    fgets(array, 1000001, stdin);

    for (int i = 0; array[i] != '\\'; i++)
    {
        printf("%c", array[i]);
    }

    return 0;
}