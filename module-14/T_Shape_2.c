#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int l = 1;
    for (int i = 1; i <= x; i++)
    {
        for (int k = 1; k <= x - i; k++)
            printf(" ");

        for (int j = 0; j < l; j++)
            printf("*");

        l += 2;
        printf("\n");
    }

    return 0;
}