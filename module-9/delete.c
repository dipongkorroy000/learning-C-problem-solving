#include <stdio.h>

int main()
{
    // int x;
    // scanf("%d", &x);

    // int array[x];

    // for (int i = 0; i < x; i++)
    // {
    //     scanf("%d", &array[i]);
    // }

    // int index;
    // scanf("%d", &index);
    // x -= 1;

    // for (int i = index; i < x; i++)
    // {
    //     array[i] = array[i + 1];
    // }

    // for (int i = 0; i < x; i++)
    // {
    //     printf("%d ", array[i]);
    // }

    // ----------- alternative
    // int x;
    // scanf("%d", &x);

    // int array[x];

    // for (int i = 0; i < x; i++)
    // {
    //     scanf("%d", &array[i]);
    // }

    // int index;
    // scanf("%d", &index);

    // for (int i = 0; i < x; i++)
    // {
    //     if (i == index)
    //     {
    //         continue;
    //     }
    //     printf("%d ", array[i]);
    // }

    // alternative ------------
    int x;
    scanf("%d", &x);

    int array[x];

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &array[i]);
    }

    int index;
    scanf("%d", &index);
    for (int i = index; i < x - 1; i++)
    {
        array[i] = array[i + 1];
    }
    x--;

    for (int i = 0; i < x; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}