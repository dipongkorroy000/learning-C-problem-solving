#include <stdio.h>

void odd_even()
{
    int x;
    scanf("%d", &x);
    int array[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &array[i]);
    }
    int even = 0;
    int odd = 0;
    for (int i = 0; i < x; i++)
    {
        if (array[i] == 0)
            even++;
        else if (array[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("%d %d", even, odd);
}

int main()
{

    odd_even();

    return 0;
}