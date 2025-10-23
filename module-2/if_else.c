#include <stdio.h>
int main()
{

    int money = 0;
    scanf("%d", &money);

    if (money >= 100)
    {
        printf("done");
    }
    else if (money >= 50)
    {
        printf("done for 50");
    }
    else
    {
        printf("no");
    }

    return 0;
}