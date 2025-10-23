#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int array[x + 1];

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &array[i]);
    }

    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);

    // for (int i = x; i >= a; i--)
    // {
    //     if (i > 0)
    //     {
    //         array[i] = array[i - 1];
    //     }

    //     if (i == a)
    //     {
    //         array[i] = b;
    //     }
    // }

    // alternative ------
    for (int i = x; i >= a + 1; i--)
    {
        array[i] = array[i - 1];
    }
    array[a] = b;

    for (int i = 0; i < x + 1; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}