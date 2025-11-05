// #include <stdio.h>

// void swap(int *p, int *q)
// {
//     int temp = *p;
//     *p = *q;
//     *q = temp;
// }

// int main()
// {
//     int a = 6, b = 5;
//     swap(&a, &b);
//     printf("%d %d\n", a, b);
//     return 0;
// }

// #include <stdio.h>
// void m(int *p){
//     int i =0;
//     for(i = 0; i< 5; i++){
//         printf("%d", p[i]);
//     }
// }

// int main()
// {
//     int a[5]= {6 ,5,3};
//     m(a);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int ary[4] = {1, 2, 3, 4};
//     printf("%d\n", *ary);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int array[4] = {1, 2, 3, 4};
//     int *p;
//     p = array + 3;
//     *p = 5;
//     printf("%d\n", array[3]);
//     return 0;
// }