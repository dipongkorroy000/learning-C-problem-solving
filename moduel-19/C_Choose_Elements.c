#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int array[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (array[i] < array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            };

    long long int sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (array[i] < 0) continue;
        sum += array[i];
    }

    printf("%lld", sum);
    return 0;
}