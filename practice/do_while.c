#include <stdio.h>
int main()
{
    int a, sum = 0;
    do
    {
        printf("enter the num ");
        scanf("%d", &a);
        sum += a;

    } while (a != 0); // stop taking values until the user enter '0'

    {
        printf("the sum is = %d  ", sum);
    }
    return 0;
}