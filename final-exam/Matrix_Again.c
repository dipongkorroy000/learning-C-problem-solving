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

    for (int j = 0; j < y; j++)
        printf("%d ", array[x - 1][j]);
    printf("\n");
    for (int j = 0; j < x; j++)
        printf("%d ", array[j][y-1]);

    return 0;
}