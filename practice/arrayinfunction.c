/*   

                //passing the base address of array in function by call by value

#include <stdio.h>
int arr(int arr[])
{
    // arr[3]=0; // updating the value of array in function
    for(int i=0;i<4;i++)
    {
        printf("the value at index %d is =%d\n",i,arr[i]);    
    }printf("\n");arr[2]=10; //updating the value of array in function
        }
int main()
{int i;
int array[]= { 2,3,4,1};
    printf("Hello World\n");
arr(array);
printf("after updating the value\n\n");
arr(array);
    return 0;
}

*/

                        // call by reference
#include<stdio.h>
int fun(int *ptr)
{
    for (int i = 0; i < 4; i++) 
    {
       printf("the value at index %d is =%d\n",i,ptr[i]); }
    *(ptr)=2;printf("\n");
}
int main()
{
    int arr[]={100,43,45,560};
    fun(arr);
    printf("after updating the value \n\n");
    fun(arr);
    return 0;
}