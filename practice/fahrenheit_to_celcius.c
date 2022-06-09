#include <stdio.h>
int main()
{
    int a;
    float fh, cl;
    printf("1. choose to convert from fahrenheit to celcius\n");
    printf("2. choose to convert from celcius to fahrenheit\n");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("enter the value in fh \n");
        scanf("%f", &fh);
        cl = (fh - 32) / 1.8;
        printf("temp. in cl is %.3f", cl);
    }
    else if (a == 2)
    {
        printf("enter the value in cl\t");
        scanf("%f", &cl);
        fh = (cl * 1.8) + 32;
        printf("temp. in fh is %.3f", fh);
    }
    else
        printf("invalid input");
    return 0;
}