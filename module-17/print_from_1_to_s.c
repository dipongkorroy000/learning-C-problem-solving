#include <stdio.h>
// recursion control

void function4(int x)
{
    if (x == 6)
        return;
    function4(x + 1);

    printf("%d ", x);
}

void function3(int x)
{
    if (x == 20)
        return;
    if (x % 2 == 0)
    {
        printf("%d ", x);
    }
    function3(x + 1);
}

void function2(int x)
{
    printf("%d ", x);
    if (x == 0)
        return;
    function2(x - 1);
}

void function(int x)
{
    printf("%d ", x);
    if (x == 5)
        return;
    function(x + 1);
}

int main()
{
    // function(1);

    // function2(5);

    // function3(1);

    // important function
    function4(1);

    printf("-end");
    return 0;
}