#include <stdio.h>

void remove_element(int array[], int x)
{
    for (int i = 0, j = x - 1; i <= j; i++, j--)
    {
        printf("%d", array[i]);

        if (i >= j)  break; // stop inner loop
        printf(" ");

        printf("%d", array[j]);
        if (i <= j) printf(" ");
    }
}

int main()
{
    int x;
    scanf("%d", &x);
    int array[x];
    for (int i = 0; i < x; i++)
        scanf("%d", &array[i]);

    remove_element(array, x);
    return 0;
}