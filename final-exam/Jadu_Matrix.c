#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    if (x != y)
    {
        printf("NO");
        return 0;
    }

    int array[x][x];
    for (int i = 0; i < x; i++)
        for (int j = 0; j < x; j++)
            scanf("%d", &array[i][j]);

    bool end = true;
    for (int i = 0; i < x && end; i++)
        for (int j = 0; j < x; j++)
            if (i == j || i + j == x - 1)
            {
                if (array[i][j] != 1)
                {
                    end = false;
                    break;
                }
            }
            else
            {
                if (array[i][j] != 0)
                {
                    end = false;
                    break;
                }
            }

    if (end) printf("YES");
    else printf("NO");

    return 0;
}