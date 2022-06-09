#include <stdio.h>
int main()
{
    int num, b, i = 1;
    printf("enter the number to get its table\n");
    scanf("%d", &num);
    do
    {
        printf("%d X %d =%d \n", num, i, b = (num * i));
        i = i + 1;

    } while (i < 11);
    return 0;
}
