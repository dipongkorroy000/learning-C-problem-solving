#include <stdio.h>

void function1(int narray[], int x)
{
    // narray[1] = 200;
    // printf("function1: %p\n", narray);
    for (int i = 0; i < x; i++)
    {
        printf("%d ", narray[i]);
    }
    printf("\n");
}

// function1 alternative
void function2(int *p, int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("%d ", p[i]);
    }
}

int main()
{
    int x;
    scanf("%d", &x);

    int array[5];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &array[i]);
    }

    function1(array, x);
    function2(array, x);

    // printf("main: %p\n", array);

    return 0;
}