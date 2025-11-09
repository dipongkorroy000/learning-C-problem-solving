#include <stdio.h>

void function(int x)
{
    if (x == 0)
        return;
    function(x - 1);
    printf("%d\n", x);
}

int main()
{
    int x;
    scanf("%d", &x);
    function(x);
    return 0;
}