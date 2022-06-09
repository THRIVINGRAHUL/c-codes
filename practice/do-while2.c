
#include <stdio.h>
int main()
{
    int a, i = 0;
    printf("enter the value\n"); // do while print atleast a time
    scanf("%d", &a);
    do
    {
        printf("%d\n", i);
        i += 1;
    } while (i < a);

    return 0;
}
