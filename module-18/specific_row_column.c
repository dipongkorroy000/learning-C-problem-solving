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

    int specific_row;
    scanf("%d", &specific_row);

    for (int i = 0; i < y; i++)
    {
        printf("%d ", array[specific_row][i]);
    }
    printf("\n");
 
    int specific_column;
    scanf("%d", &specific_column);

    for (int i = 0; i < x; i++)
    {
        printf("%d\n", array[i][specific_column]);
    }

    return 0;
}