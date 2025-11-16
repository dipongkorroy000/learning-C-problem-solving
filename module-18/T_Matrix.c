#include <stdio.h>

int primary_diagonal_Summation(int row, int array[row][row])
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (i == j)
            {
                sum += array[i][j];
            }
        }
    }
    return sum;
}

int secondary_diagonal_Summation(int row, int array[row][row])
{
    int sum = 0;

    for (int i = row - 1; i >= 0; i--)
    {
        int j = row - i - 1;
        sum += array[i][j];
    }

    return sum;
}

int main()
{
    int x;
    if (scanf("%d", &x) != 1)
        return 1;
    int array[x][x];
    for (int i = 0; i < x; i++)
        for (int j = 0; j < x; j++)
            scanf("%d", &array[i][j]);

    int primary_summation = primary_diagonal_Summation(x, array);
    int secondary_summation = secondary_diagonal_Summation(x, array);

    int sum = primary_summation - secondary_summation;

    if (sum < 0)
        sum = -sum;

    printf("%d", sum);

    return 0;
}

// #include <stdio.h>

// void printMatrix(int rows, int cols, int arr[rows][cols]) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     printMatrix(2, 3, matrix);
//     return 0;
// }