#include <stdio.h>

long long int recursion(int x)
{
    if(x ==1 ) return 1;
    long long int mul = recursion(x-1);

    return x * mul;
}

int main()
{
    int x;
    scanf("%d", &x);

    long long int result = recursion(x);

    printf("%lld", result);
    return 0;
}