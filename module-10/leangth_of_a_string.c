#include <stdio.h>

int main()
{
    char array[101];

    int sum = 0;

    scanf("%s", array);

    // NULL = "\0"

    // for (int i = 0; array[i] != '\0'; i++)
    // {
    //     sum += 1;
    // }

    // printf("%d", sum);

    // alternative ---
    int arrayLength = strlen(array); // using strlen() function
    printf("%d", arrayLength);

    return 0;
}