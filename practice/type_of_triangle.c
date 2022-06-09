#include <stdio.h>
// area of circle
int main()
{
    int a, b, c;
    printf("enter the sides of triangle\n");

    scanf("%d%d%d", &a, &b, &c);
    if ((a == b) && (b == c))
        printf("equilateral triangle ");
    else if ((a == b) || (b == c) || (c == a))  // first 'or' condition run between 1st value and 2nd value 
        printf("the triangle is isoscelus");    // then run between 2nd and 3rd.
    else
        printf("scalen triangle ");

    return 0;
}