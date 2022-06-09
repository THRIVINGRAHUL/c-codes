#include <string.h>
#include <stdio.h>

void func(char *ptr)
{
    int flag = 0, i = 0, index = 0;
    for (i = 0; i < strlen(ptr); i++)
    {
        if (ptr[i] == '<')
        {
            flag = 1;
            continue;
        }
        else if (ptr[i] == '>')
        {
            flag = 0;
            continue;
        }
        if (flag == 0)
        {
            ptr[index] = ptr[i];
            index++;
        }
    }
    ptr[index] = '\0';
    while (ptr[0] == ' ')
    {
        for (int i = 0; i < strlen(ptr); i++)
        {
            ptr[i] = ptr[i + 1];
        }
    }
    while (ptr[strlen(ptr) - 1] == ' ')
    {
        ptr[strlen(ptr) - 1] = '\0';
    }
}

int main()
{
    char str[] = "<start>Welcome in VS Code<end>";
    int a = (strlen(str));
    printf("\ntotal no. of character in given string is %d", a);
    func(str);
    printf("\n%s", str);
    printf("\ntotal no. of character after function is %d", strlen(str));
    return 0;
}
