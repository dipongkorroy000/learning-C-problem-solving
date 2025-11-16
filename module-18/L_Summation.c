#include <stdio.h>

int summation(int array[], int x)
{
    if (x == 0)
        return array[0]; // base case

    return array[x] + summation(array, x - 1); // recursive case
}

int main()
{
    int x;
    scanf("%d", &x);
    int array[x];
    for (int i = 0; i < x; i++)
        scanf("%d", &array[i]);

    int sum = summation(array, x - 1);

    printf("%d\n", sum);

    return 0;
}
