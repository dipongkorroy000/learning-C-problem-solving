#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int array[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    if (x == 1)
        printf("This is a row matrix");
    else if (y == 1)
        printf("This is a column matrix");
    else if (x == y)
    {
        printf("This is a square matrix\n");

        int isDiagonal_Matrix = 1;
        int isScalar_Matrix = 1;
        int isUnit_Matrix = 1;
        int first_element = array[0][0];

        // Diagonal matrix
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if ((i != j && array[i][j] != 0))
                {
                    isDiagonal_Matrix = 0;
                    isScalar_Matrix = 0;
                    isUnit_Matrix = 0;
                    goto jump;
                }

                if ((i == j && (array[i][j] != first_element)))
                {
                    isScalar_Matrix = 0;
                    isUnit_Matrix =0;
                    goto jump;
                }

                if ((i == j && (array[i][j] != 1)))
                {
                    isUnit_Matrix = 0;
                }
            }
        }

    jump:
    {
        if (isDiagonal_Matrix == 1)
            printf("This is a Diagonal matrix\n");

        if (isScalar_Matrix == 1)
            printf("This is a Scalar matrix\n");

        if (isUnit_Matrix == 1)
            printf("This is a unit matrix");
    }
    }
    return 0;
}
