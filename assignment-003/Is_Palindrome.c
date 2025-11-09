#include <stdio.h>
#include <string.h>

// int is_palindrome(char array[], int length)
// {
//     int result = 0;
//     for (int i = 0, j = length - 1; i <= j; i++, j--)
//     {
//         if (array[i] != array[j])
//             result = 0;
//         else
//             result = 0;
//     }
//     return result;
// }

int is_palindrome(char array[], int length)
{
    int result = 1;
    for (int i = 0, j = length - 1; i <= j; i++, j--)
    {
        if (array[i] != array[j])
            result = 0;
    }
    return result;
}

int main()
{
    char array[1001];
    scanf("%s", array);

    int length = strlen(array);

    int value = is_palindrome(array, length);

    if (value == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}