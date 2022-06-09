#include <stdio.h>
#include <conio.h>

int main()
{
  int a, sum = 0, i;
  printf("enter a number :: ");
  scanf("%d", &a);
  for (i = 0; i <= a; i++)
  {
    sum = sum + i;
  }
  printf("the sum of n terms is = %d", sum);
  return 0;
}
/*
int main()
{
  int i=0,num,sum=0;
  printf("Enter a number :: ");
  scanf("%d",&num);
  for(;i<num;i++)
  {
  sum=sum+i;
  }
  printf("\n The sum of numbers = %d",sum);

  return 0;
}*/