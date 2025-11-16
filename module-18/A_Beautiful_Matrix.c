#include <stdio.h>

int main()
{
    int array[5][5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            scanf("%d", &array[i][j]);

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if(array[i][j]==1) {
                int a = (i+1)-3;
                int b = (j+1)-3;
                if(a<0) a =-a;
                if(b<0) b =-b;
                printf("%d", a+b);
            }

    return 0;
}