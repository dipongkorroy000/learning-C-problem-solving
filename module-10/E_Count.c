#include <stdio.h>

int main()
{
    char array[1000001];

    fgets(array, 1000001, stdin);

    const arrayLength = strlen(array);

    int sum = 0;
    for (int i = 0; i < arrayLength - 1; i++)
    {
        sum += array[i]-48;
        // alternative ----
        // sum += array[i]-'0';
    }

    printf("%d", sum);

    return 0;
}