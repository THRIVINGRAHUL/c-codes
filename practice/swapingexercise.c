#include <stdio.h>
#include <string.h>
#define N 5
void reverse(int array[]);
int main()
{
    int arr[N];
    
    for (int i = 0; i < N; i++)
    {
        printf("enter the %d index value :: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nthe array is :: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }reverse(arr);
    printf("\nat 1 index value is %d",arr[1]);
    return 0;
}

void reverse(int array[])
{
    int temp;
    printf("\n\nthe reverse array is ::");
    for (int i = 0; i < (N / 2); i++)
    {
        temp = array[i];
        array[i] = array[4 - i];
        array[4-i]=temp;    
       
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ",array[i]);
    }printf("\n");
    
}

// void reverse(int array[])
// {     printf("\nreverse array is :: \n");

//  for(int i=5;i>=0;i--)
//  {
//      printf("%d\t",array[i]);
//  }
// }
// int main()
// {
//     char arr2[]="hiiboss"; // we can write integer type data as character
//     int arr1[] = {1, 3, 23, 45, 64, 434,};
//     printf("array is :: \n");
//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d\t",arr1[i]);
//     }
//     reverse(arr1);
//     printf("\n\n by using strrev function\n");
//     puts(strrev(arr2));

// }