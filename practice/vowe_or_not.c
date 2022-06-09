#include <stdio.h>
int main()
{ // for character input declare variable with 'char'
    char ch;
    int value, increment = 0;

    printf("enter the character from a to z (small caps)\n");
    scanf("%c", &ch); // '%c' is used to get the char value

    switch (ch)
    {
    case 'a':
        printf("%c is vowel\n", ch);
        break;
    case 'e':
        printf("%c is vowel\n", ch);
        break;
    case 'i':
        printf("%c is vowel\n", ch);
        break;
    case 'o':
        printf("%c is vowel\n", ch);
        break;
    case 'u':
        printf("%c is vowel\n", ch);
        break;
    default:
        printf("%c is constant\n", ch);
        break;
    }
    return 0;
}