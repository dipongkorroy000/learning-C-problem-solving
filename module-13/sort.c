#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int array[x];
    for (int i = 0; i < x; i++)
        scanf("%d", &array[i]);

    // ascending
    // for (int j = 0; j < x; j++)
    // {

    //     for (int l = j + 1; l < x; l++)
    //     {
    //         if (array[j] > array[l])
    //         {
    //             // printf("%d %d; ", array[j], array[l]);
    //             int temp = array[j];
    //             array[j] = array[l];
    //             array[l] = temp;
    //         }
    //     }
    // }

    // descending
    for (int j = 0; j < x; j++)
    {

        for (int l = j + 1; l < x; l++)
        {
            if (array[j] < array[l])
            {
                // printf("%d %d; ", array[j], array[l]);
                int temp = array[j];
                array[j] = array[l];
                array[l] = temp;
            }
        }
    }

    for (int i = 0; i < x; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}