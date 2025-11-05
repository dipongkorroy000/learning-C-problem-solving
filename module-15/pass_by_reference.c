#include <stdio.h>

void function1(int *x)
{
    *x = 200; // address value change
    // printf("function1 x address: %p \n", &x);
    // printf("%d", *x); // value
}

int main()
{
    int x = 100;
    function1(&x); // just value pass

    // printf("%d", x);
    // printf("main function x address: %p", &x);

    return 0; 
}