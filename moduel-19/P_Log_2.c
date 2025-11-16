#include <stdio.h>
 
int recursion(long long int x){

    if(x == 1) return 0;

    return 1 + recursion(x/2);
}

int main()
{
    long long int x;
    scanf("%lld", &x);

    int value = recursion(x);

    printf("%d", value);
    return 0;
}