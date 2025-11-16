#include <stdio.h>
#include <string.h>

// int recursion(char array[], int x)
// {
//     int sum = 0;
//     for (int i = 0; i < x; i++)
//         if (array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u' || array[i] == 'A' || array[i] == 'E' || array[i] == 'I' || array[i] == 'O' || array[i] == 'U')
//             sum += 1;

//     return sum;
// }

// int main()
// {
//     char array[201];
//     fgets(array, 201, stdin);

//     int length = strlen(array);

//     int sum = recursion(array, length);

//     printf("%d", sum);

//     return 0;
// }

// int recursion(char array[], int x)
// {
//     if (array[x] == '\0')
//         return;

//     int count = recursion(array, x + 1);

//     return count + 1;
// }

// int recursion(char array[], int x)
// {
//     if (array[x] == '\0')
//         return;

//     int count = recursion(array, x + 1);

//     return count + 1;
// }

// int recursion(char array[], int x)
// {
//     if (array[x] == '\0')
//         return;

//     int count = recursion(array, x + 1);

//     return count + 1;
// }

// int recursion(char array[], int x)
// {
//     if (array[x] == '\0')
//         return;

//     int count = recursion(array, x + 1);

//     return count + 1;
// }

int recursion(char array[], int x)
{
    if (array[x] == '\0')
        return 0;

    int count = recursion(array, x + 1);

    if (array[x] == 'a' || array[x] == 'e' || array[x] == 'i' || array[x] == 'o' || array[x] == 'u' || array[x] == 'A' || array[x] == 'E' || array[x] == 'I' || array[x] == 'O' || array[x] == 'U')
        return count + 1;

    else
        return count;
}

int main()
{
    char array[201];
    fgets(array, 201, stdin);

    int sum = recursion(array, 0);

    printf("%d", sum);

    return 0;
}