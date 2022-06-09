// with 'MACRO'
#include <stdio.h>
#define N 5 // declare the value of N as 5 ,istead of changing array size in program,
int main()  // change the value of N here.
{
    int a[N], i;

    for (i = 0; i < N; i++)
    {
        printf(" %d array is :: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nthe array is :: ");
    for (i = 0; i < N; i++)
    {
        printf("%d; ", a[i]);
    }
    printf("\nthe reverse of array is :: ");
    for (i = (N - 1); i >= 0; i--)
    {
        printf("%d; ", a[i]);
    }
    return 0;
}

// without 'MACRO'

// #include <stdio.h>
// int main()
// {
//     int arr[5];                                                   /* we can define array in many ways  */
//                                                                   // a[]= {1.2.3};
//     int i;                                                        // a[4]= {1,5,3,4};
//     for (i = 0; i < 5; i++)                                       // a[0]= 1; a[1]=2;  single declaration.
//     {                                                             // or use loop to declare multiple value in array.
//         printf(" %d array is :: ", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("\nvalue in array is :: ");
//     for (i = 0; i < 5; i++)
//     {
//         // printf("the %d array is %d\n", i, arr[i]);

//         printf("%d, ", arr[i]);
//     }

//     printf("\nthe reverse array is :: ");
//     for (i = 4; i >= 0; i--)
//         printf("%d, ", arr[i]);
//     return 0;
// }
