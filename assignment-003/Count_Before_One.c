#include <stdio.h>

int count_before_one(int narray[], int x)
{
    int value;
    for (int i = 0; i < x; i++)
    {
        // printf("%d ", narray[i]);
        if (1 == narray[i])
        {
            value = i;
            break;
        }
    }
    return value;
}

int main()
{
    int x;
    scanf("%d", &x);

    int array[x];
    for (int i = 0; i < x; i++)
        scanf("%d", &array[i]);

    int value = count_before_one(array, x);

    printf("%d", value);

    return 0;
}