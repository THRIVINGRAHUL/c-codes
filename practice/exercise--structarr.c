#include <stdio.h>
#define N 3
struct Employee
{
    char name[20];
    char driving_license[20];
    char route[20];
    float kms;
};
struct Employee E[N];
int main()
{int num;
    for (int i = 0; i < N; i++)
    {
        printf("\nDETAILS OF %d DRIVER\n\n", i + 1);
        printf("enter the name :: ");
        scanf("%s", &E[i].name);
        printf("enter the driving license :: ");
        scanf("%s", &E[i].driving_license);
        printf("route taken to travel :: ");
        scanf("%s", &E[i].route);
        printf("enter the kms tavel by the driver %d :: ", i + 1);
        scanf("%f", &E[i].kms);
    }
    printf ("\nenter the number to see the driver detail 1 to 3 :: ");
    scanf("%d",&num);
      for(int i = num-1; i < num; i++)
      {
        printf("\nName of %d driver is %s\n",i+1,E[i].name);
        printf("the driving license of %d driver is %s\n",i+1,E[i].driving_license);
        printf("the route taken by %d driver is %s\n",i+1,E[i].route);
        printf("distance trave; by %d driver is %.2f\n",i+1,E[i].kms);
      }
      
    return 0;
}