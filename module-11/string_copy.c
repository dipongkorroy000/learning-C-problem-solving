#include <stdio.h>

int main()
{
    char array[101], array2[101];

    scanf("%s", array);
    scanf("%s", array2);

    // int length = strlen(array2);

    // for(int i =0; i<= length; i++){
    //     array[i]= array2[i];
    // }

    // printf("%s", array);

    // alternative sort

    strcpy(array, array2);

    printf("%s", array);

    return 0;
}