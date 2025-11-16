#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int array[x][y];
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            scanf("%d", &array[i][j]);

    for (int i = 0; i < x; i++)
    {
        for (int j = y-1; j >= 0; j--)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}