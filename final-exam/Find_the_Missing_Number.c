#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    for(int i = 0; i<x;i++){
        long long int m;
        int a,b,c;
        scanf("%lld %d %d %d", &m, &a, &b,&c);
        long long int mul = a*b*c;
        long long int divided = m/mul;

        // if(m == 0) printf("%d\n", 0);
        if(m%mul == 0) printf("%lld\n", divided);
        else if(m%mul != 0) printf("%d\n", -1);

        // printf("%d", m%mul);

    }
    return 0;
}