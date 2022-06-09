#include <stdio.h>
int main()
{
    int ch;
    printf("enter the character\n");
    scanf("%d", &ch);
    if (ch <= 9 && ch >= 0)
    {
        printf("entered data is digit\n");
    }
    else
        printf("the entered data is not digit");
    return 0;
}