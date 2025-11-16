#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int array[x];
    for (int i = 0; i < x; i++)
        scanf("%d", &array[i]);

    int min_number = array[0];
    
    for (int j = 0; j < x; j++)
    if (min_number > array[j])
        min_number = array[j];
    
    
    int count =0;
    for (int j = 0; j < x; j++)
        if (min_number >= array[j])
            count++;

        if(count %2 != 0) printf("Lucky");
        if(count %2 == 0) printf("Unlucky");

    return 0;
}