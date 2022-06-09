#include <stdio.h>
int main()
{
    int a, i = 1;
    printf("enter the value");
    scanf("%d", &a);
    while (i < a)
    {

        printf("%d\t", i);
        i += 1;
    }
    return 0;
}