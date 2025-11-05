#include <stdio.h>

int main()
{
    int array[5] = {10, 20, 30, 40, 50};

    // printf("%p\n", &array[0]);
    // printf("%p\n", &array[1]);
    // printf("%p\n", &array[2]);
    // printf("%p\n", &array[3]);
    // printf("%p\n", &array[4]);

    // printf("array name address: %p\n", &array);
    // printf("array name => array[0] = value: %d\n", *array);

    *array = 100;
    *(array + 1) = 200;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}