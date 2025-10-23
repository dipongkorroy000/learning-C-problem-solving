#include <stdio.h>

int main()
{
    char array[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%c", &array[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%c\n", array[i]);
    }

    return 0;
}