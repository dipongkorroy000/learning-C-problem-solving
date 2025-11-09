#include <stdio.h>

void print_array(int *array, int n, int i)
{
    if (i == n)
        return;

    printf("%d ", array[i]);
    print_array(array, n, i + 1);
}

void print_array_reverse(int *array, int n, int i)
{
    if (i == n)
        return;

    print_array(array, n, i + 1);
    printf("%d ", array[i]);
}

int main()
{
    int x;
    scanf("%d", &x);

    int array[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &array[i]);
    }

    print_array(array, x, 0);

    printf("\n");
    
    print_array_reverse(array, x, 0);
    return 0;
}