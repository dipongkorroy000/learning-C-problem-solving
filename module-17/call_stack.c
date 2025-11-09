#include <stdio.h>

void function1()
{
    printf("Hello from function1!\n");
}

void function2()
{
    printf("Hello from function2!\n");
    function1();
}

void function3()
{
    printf("Hello from function3!\n");
    function2();
}

int main()
{
    printf("Hello, World!\n");
    function3();
    return 0;
}