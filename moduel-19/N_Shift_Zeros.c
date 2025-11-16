#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int array[x];
    for (int i = 0; i < x; i++)
        scanf("%d", &array[i]);

    for (int i = 0; i < x; i++)
        for (int j = i + 1; j < x; j++)
            if (array[i] == 0)
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            };

    for (int i = 0; i < x; i++)
        printf("%d ", array[i]);

    return 0;
}