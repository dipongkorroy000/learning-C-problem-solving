#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int array[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d", array[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}