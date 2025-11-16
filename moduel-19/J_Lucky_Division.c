#include <stdio.h>
#include <stdbool.h>

int main()
{
    char array[1001];
    scanf("%s", &array);

    int length = strlen(array);

    int numArray[length];
    for (int i = 0; i < length; i++)
        numArray[i] = array[i] - 48;

    int totalNum = numArray[0];
    for (int k = 1; k < length; k++)
        totalNum = (totalNum * 10) + numArray[k];

    if (totalNum % 4 == 0 || totalNum % 7 == 0)
    {
        printf("YES");
        return 0;
    }

    bool lucky = true;
    for (int l = 0; l < length; l++)
        if (numArray[l] != 4 && numArray[l] != 7)
        {
            lucky = false;
            break;
        }

    // printf("%d", lucky);

    if (lucky)
        printf("YES");
    else
        printf("NO");

    return 0;
}
