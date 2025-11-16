#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int y = 1;
    int i = 1;

    while (i < x)
    {
        i += 2;
        y++;
    }

    int star = 1;
    for (int i = 1; i < y + 6; i++)
    {
        for (int k = 1; k < y + 6 - i; k++)
            printf(" ");

        for (int j = 1; j <= star; j++)
            printf("*");

        printf("\n");
        star += 2;
    }

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
            printf(" ");

        for (int k = 1; k <= x; k++)
            printf("*");

        printf("\n");
    }

    return 0;
}