#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int a = x;
    int b = x;

    if (x % 2 == 1)
        x++;

    int y = 1;
    for (int i = 1; i <= x / 2; i++)
    {
        for (int k = 1; k <= b - i; k++)
        {
            printf(" ");
        }
        b -= 1;

        for (int j = 1; j <= y; j++)
        {
            printf("#");
        }
        printf("\n");

        if (a % 2 == 1 && i >= x / 2)
            break;

        y += 2;

        for (int k = 1; k <= b - i; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= y; j++)
        {
            printf("-");
        }
        printf("\n");

        if (i == x / 2)
            break;
        y += 2;
    }

    // printf("%d", y);
    int z = y - 2;

    int star = 1;
    if (a % 2 == 1)
        star = 0;

    for (int i = 1; i <= a - 1; i++)
    {

        for (int j = 1; j <= (y - (z)) / 2; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= z; k++)
        {
            if (star == 1)
                printf("#");
            else
                printf("-");
        }
        printf("\n");
        z -= 2;

        if (star == 1)
            star = 0;
        else
            star = 1;
    }

    return 0;
}