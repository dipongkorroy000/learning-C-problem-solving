#include <stdio.h>

void recursion(x)
{
    if (x == 0) return;

    recursion(x / 10);

    printf("%d ", x % 10);
}

int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        int n;
        scanf("%d", &n);
        if(n == 0) printf("%d", n);
        recursion(n);
        printf("\n");
    }
    return 0;
}