#include <stdio.h>

void recursion(int x)
{
    if(x == 0) return;
    recursion(x-1);
    printf("%d\n", x);
}

int main()
{
    int x;
    scanf("%d", &x);

    recursion(x);

    return 0;
}