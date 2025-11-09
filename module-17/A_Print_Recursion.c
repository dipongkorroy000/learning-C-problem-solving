#include <stdio.h>

void function(int a)
{
    printf("I love Recursion\n");
    if (a == 1)
        return;
    function(a - 1);
}

int main()
{
    int x;
    scanf("%d", &x);
    function(x);
    return 0;
}