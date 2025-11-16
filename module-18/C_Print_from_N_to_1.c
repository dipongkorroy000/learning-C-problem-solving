#include <stdio.h>

void recursion(int x)
{
    printf("%d", x);
    if (x == 1)
        return;
    printf(" ");
    recursion(x - 1);
}

int main()
{
    int x;
    scanf("%d", &x);
    recursion(x);
    return 0;
}