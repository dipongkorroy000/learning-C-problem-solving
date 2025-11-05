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

    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        printf("%d ", array[i]);
    }

    return 0;
}