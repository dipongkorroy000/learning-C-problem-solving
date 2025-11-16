#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        int x;
        scanf("%d", &x);
        int array[x];
        for (int i = 0; i < x; i++)
            scanf("%d", &array[i]);

        int array2[x];

        for (int i = 0; i < x; i++)
            array2[i] = array[i];

        for (int i = 0; i < x; i++)
            for (int j = i + 1; j < x; j++)
                if (array2[i] > array2[j])
                {
                    int temp = array2[j];
                    array2[j] = array2[i];
                    array2[i] = temp;
                }

        int arrayC[x];
        for (int i = 0; i < x; i++)
        {
            int value = array[i] - array2[i];
            if(value<0) value = -value;
            arrayC[i] = value;
        }

        for (int i = 0; i < x; i++)
            printf("%d ", arrayC[i]);

        printf("\n");
    }

    return 0;
}