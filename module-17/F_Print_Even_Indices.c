#include <stdio.h>

void function(int *array, int x){

if(x < 0) return;

if(x % 2 == 0 ) printf("%d ", array[x]);

function(array ,x-1);
}

int main()
{
    int x;
    scanf("%d", &x);
    int array[x];
    for(int i =0; i<x; i++) scanf("%d", &array[i]);

    function(array, x-1);

    return 0;
}