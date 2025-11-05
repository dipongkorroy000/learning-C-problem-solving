#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int l = 1;
    for (int i = 1; i <= x; i++)
    {
        for (int k = x - i; k >= 1; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= l; j++)
        {
            printf("*");
        }
        l += 2;

        printf("\n");
    }

    int f = l - 2;
    for (int i = x; i > 0; i--)
    {
        for (int k = 1; k <= x - i; k++)
        {
            printf(" ");
        }

        for (int j = f; j >= 1; j--)
        {
            printf("*");
        }

        f -= 2;
        printf("\n");
    }
    return 0;
}