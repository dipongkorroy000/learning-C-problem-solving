#include <stdio.h>

int main()
{
    char array[101], array2[101];

    scanf("%s %s", &array, &array2);

    // int i = 0;
    // while (1)
    // {
    //     if (array[i] == '\0' && array2[i] == '\0')
    //     {
    //         printf("Equal");
    //         break;
    //     }
    //     else if (array[i] == '\0')
    //     {
    //         printf("A is smaller");
    //         break;
    //     }
    //     else if (array2[i] == '\0')
    //     {
    //         printf("B is smaller");
    //         break;
    //     }

    //     else if (array[i] < array2[i])
    //     {
    //         printf("A is smaller");
    //         break;
    //     }
    //     else if (array2[i] < array[i])
    //     {
    //         printf("B is smaller");
    //         break;
    //     }
    //     else if (array[i] == array2[i])
    //     {
    //         i++;
    //     }
    // }

    // alternative sort

    int value = strcmp(array, array2);

    if (value < 0)
    {
        printf("A is smaller");
    }
    else if (value == 0)
    {
        printf("Equal");
        
    }
    else if (value > 0)
    {
        printf("B is smaller");
    }

    return 0;
}