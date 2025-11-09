#include <stdio.h>

void function(int x)
{
    printf("%d", x);
    if (x == 1)
        return;
    printf(" ");
    function(x - 1);
}

int main()
{
    int x;
    scanf("%d", &x);
    function(x);
    return 0;
}