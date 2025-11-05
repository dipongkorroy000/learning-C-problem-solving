#include <stdio.h>
#include<math.h>

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int division(int a, int b)
{
    return a / b;
}

int main()
{
    int sumNums = sum(2, 3);

    // int subNums2 = sub(5, 2);
    // int divisionNum = division(4, 2);
    // printf("%d %d %d", sumNums, subNums2, divisionNum);

    // build in function

    int n1 = ceil(4.3);
    int n2 = floor(4.8);
    int n3 = round(3.5);    // n3 < 3.5 = 3; n3 >= 3.5 = 4;
    int n4 = sqrt(16);  // 16 = 4^4 = 4
    int n5 = pow(3,2); // power 3^2
    int n6 = abs(-10); // absolute = negative ignore


    printf("%d %d %d %d %d %d", n1, n2, n3, n4, n5, n6);

    return 0;
}
