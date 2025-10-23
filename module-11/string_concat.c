#include <stdio.h>
#include <string.h>
int main()
{
    char array[101], array2[101];

    scanf("%s %s", &array, &array2);

    // int length = strlen(array);
    // int length2 = strlen(array2);

    // for (int i = 0; i <= length2; i++)
    // {
    //     array[i + length] = array2[i];
    // }

    // printf("%s", array);

    // alternative sort

    strcat(array, array2);

    printf(array);

    return 0;
}