#include <stdio.h>

//--------four--x=0
// int recursion(int array[], int x)
// {
//     if(x == 0) return array[x];

//     int value = recursion(array, x - 1);
// }
//--------three
int recursion(int array[], int x)
{
    if(x == 0) return array[x];

    int value = recursion(array, x - 1);

    if(value< array[x]) value = array[x];
    return value;
}
// ------one
// int recursion(int array[], int x)
// {
//     if(x == 0) return array[x];

//     int value = recursion(array, x - 1);

//  if(value< array[x]) value = array[x];
//     return value;
// }

int main()
{
    int x;
    scanf("%d", &x);
    int array[x];
    for (int i = 0; i < x; i++)
        scanf("%d", &array[i]);

    int result = recursion(array, x-1);

    printf("%d", result);

    return 0;
}