#include <stdio.h>
int factorial(int number); // defination
int main()
{
    int a, b;
    printf("enter the no. to find its factorial\n");                         // finding factorial using recursion
    scanf("%d", &a);

    printf("the factorial of %d is %d ", a, factorial(a)); // call
    return 0;
}
int factorial(int number) // declaration
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * (factorial(number - 1)));
    }
}