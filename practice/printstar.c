#include<stdio.h>
void star(int a) // 1st function declaration
{int i;
    for(i=1;i<= a;i++)// for lines
    {
        for(int j=1;j<=i;j++)//for star printing
       { printf("*");}
    printf("\n");}
}
void reverse_star(int b)  // 2nd function declaration
{
    int i;
    for(b;b>=1;b--)//for lines
    {
        for(int j=1;j<=b;j++)//for star printing

       { printf("*");}
    printf("\n");}

}
int main()
{
    int value,z;
    up:
    //start:
    printf("1. For star triangle\n2. For reverse star triangle\n0. to exit \n");
    scanf("%d",&z);
    
    switch (z)
    {
        case 1:
        {printf("No. of lines :: ");
        scanf("%d",&value);
            star(value); // call
            goto up;
            // break;
        }
        case 2:
        {printf("No. of lines :: ");
        scanf("%d",&value);
            reverse_star(value); //call
            goto up;
            break;
        }
        case 0:
        {printf("exit");break;}
        default :
        {
            printf(" invalid input");
        }
    }
    
}