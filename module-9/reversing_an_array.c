#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int array[x];

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &array[i]);
    }

    // int i = 0;
    // int j = x - 1;

    // while (i < j)
    // {
    //     int tem = array[i];

    //     array[i] = array[j];
    //     array[j] = tem;

    //     i++;
    //     j--;
    // }

    // alternative --------
    for (int i = 0, j = x - 1; i < j; i++, j--)
    {
        int tem = array[i];

        array[i] = array[j];
        array[j] = tem;
    }

    for (int i = 0; i < x; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}