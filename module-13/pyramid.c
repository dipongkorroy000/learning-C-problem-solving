#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    // for (int i = 1; i <= x; i++)
    // {
    //     for (int j = i; j >= 1; j--)
    //         printf("*");

    //     printf("\n");
    // }

    // for (int i = 1; i <= x; i++)
    // {
    //     for (int k = 1; k <= x - i; k++)
    //         printf(" ");

    //     for (int j = i; j >= 1; j--)
    //         printf("*");

    //     printf("\n");
    // }

    // pyramid
    // for (int i = 1; i <= x; i += 2)
    // {
    //     int space = (x - i) / 2;

    //     for (int k = 1; k <= space; k++)
    //         printf(" ");

    //     for (int j = i; j >= 1; j--)
    //         printf("*");

    //     printf("\n");
    // }

    // module learning pyramid
    // int value = 1;
    // int space = x - 1;

    // for (int i = 1; i <= x; i++)
    // {
    //     for (int j = 1; j <= space; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= value; k++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    //     value++;
    //     space--;
    // }
   
    int value = 1;
    int space = x - 1;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= value; k++)
        {
            printf("*");
        }
        printf("\n");
        value++;
        space--;
    }

    return 0;
}