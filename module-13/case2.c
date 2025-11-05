#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int array[x];
    for (int i = 0; i < x; i++)
        scanf("%d", &array[i]);

    int y;
    scanf("%d", &y);

    int f = 0;

    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            // printf("%d %d; ", array[i], array[j]);
            if (array[i] + array[j] == y)
                printf("YES\n"), f = 1;
        }
    }

    if (f == 0)
        printf("NO");

    return 0;
}