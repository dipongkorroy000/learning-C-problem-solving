#include <stdio.h>

int find_number_of_array(int x, int y, int array[x][y], int a)
{
    int res = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (a == array[i][j])
            {
                res = 1;
                goto jump;
            }
        }
    }

jump:
    return res;
}

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int array[N][M];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &array[i][j]);

    int x;
    scanf("%d", &x);

    int result = find_number_of_array(N, M, array, x);

    if (result)
        printf("will not take number");
    else
        printf("will take number");

    return 0;
}