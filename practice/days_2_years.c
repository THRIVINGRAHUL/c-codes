#include <stdio.h>
int main()
{
    int y, m, nd, d;
    printf("enter the number of days :: ");
    scanf("%d", &d);
    y = d / 365;
    d = d % 365;
    m = d / 30;
    nd = d % 30;
    printf("%d years, %d months, %d days", y, m, nd);

    return 0;
}