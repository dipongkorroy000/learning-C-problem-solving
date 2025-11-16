#include <stdio.h>

int recursion(int array[], int x)
{
    if (x == 0)
        return array[x];

    int value = array[x] + recursion(array, x - 1);

    return value;
}

int main()
{
    int x;
    scanf("%d", &x);

    int array[x];
    for (int i = 0; i < x; i++)
        scanf("%d", &array[i]);

    const value = recursion(array, x-1);

    printf("%d", value);

    return 0;
}