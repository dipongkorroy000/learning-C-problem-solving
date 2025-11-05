#include <stdio.h>

int main()
{
    // int x = 100;
    // printf("%d\n", x);
    // printf("%p\n", &x); // x variable address

    // int *pointerName; // this is pointer variable

    // pointerName = &x;

    // printf("%p\n", pointerName); // x variable address
    // printf("%p\n", &pointerName); // pointerName variable address

    // *pointerName = 200;

    // printf("%d\n", *pointerName); // pointerName variable value (dereference)
    // printf("%d\n", x); // pointerName variable value

    // reference --->
    // value -> address = reference

    int x;
    scanf("%d", &x); // this is reference -> address = &x = x variable address value update
    printf("%d", x);

    return 0;
}