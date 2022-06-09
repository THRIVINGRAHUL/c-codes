// use of malloc,calloc,realloc,and free() functions.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *pointer;
    int i,j,n;
    printf("enter the required size of memory :: ");
    scanf("%d",&n);
    //using malloc function
    pointer=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf ("enter the %d value of array :: ",i+1);//index is 0,but the dispalyed value is increased by 1.
        scanf("%d",&pointer[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("the %d value is %d \n",i+1,pointer[i]);
    }
    free(pointer);
    // use of calloc func.
    printf("\n\nBY USINF CALLOC FUNC. \n\n");
    pointer=(int *)calloc(n,sizeof(int ));
     for(i=0;i<n;i++)
    {
        printf ("enter the %d value of array :: ",i+1);//index is 0,but the dispalyed value is increased by 1.
        scanf("%d",&pointer[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("the %d value is %d \n",i+1,pointer[i]);
    }
    printf("\n\nAFTER REALLOCATING THE POINTER SIZE\n\n");
       printf("enter the new size of pointer array :: ");scanf("%d",&n);
        pointer=(int *)realloc(pointer,n*sizeof(int));

     for(i=0;i<n;i++)
    {
        printf ("enter the %d value of array :: ",i+1);//index is 0,but the dispalyed value is increased by 1.
        scanf("%d",&pointer[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("the %d value is %d \n",i+1,pointer[i]);
    }
    return 0;
}
