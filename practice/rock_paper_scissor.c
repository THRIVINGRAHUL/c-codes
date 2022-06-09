#include <stdio.h>
#include <time.h>
#include <stdlib.h>
char comp;
char user;
char name[10];
char rrandom() // the random cariable cannot can't be used as it defined as extern
{
    srand(time(NULL));
    int a = rand() % 100;
    // printf("%d",a);
    if (a < 33)
    {
        comp = 'r';
        printf("Computer choose \"Rock\" \n");
    }
    else if (a > 33 && a < 66)
    {
        comp = 'p';
        printf("Computer choose \"Paper\" \n");
    }
    else
    {
        comp = 's';
        printf("Computer choose \"Scissor\" \n");
    }
    return comp;
}
int game(char user, char var)
{
    if (user == var)
    {
        return 0;
    }
    else if (user == 'r' && var == 'p')
    {
        return 2;
    }
    else if (user == 'r' && var == 's')
    {
        return 1;
    }
    else if (user == 'p' && var == 'r')
    {
        return 1;
    }
    else if (user == 'p' && var == 's')
    {
        return 2;
    }
    else if (user == 's' && var == 'r')
    {
        return 2;
    }
    else
        (user == 's' && var == 'p');
    {
        return 1;
    }
}
int check(int display)
{
    static int total1 = 0;
    static int total2 = 0;

   { if (display == 0)
    {
        printf("Game Draw\n");
        printf("the total points of %s is :: %d\n",name, total1 + 1);
        total1++;
        printf("the total points of computer is  :: %d\n", total2 + 1);
        total2++;
    }
    if (display == 1)
    {
        printf("%s won the game\n",name);
        printf("the total points of %s is :: %d\n",name, total1 + 1);
        total1++;
    }
    if (display == 2)
    {
        printf("Computer wins\n");
        printf("the total points of computer is :: %d\n", total2 + 1);
        total2++;
    }}if (total1 > total2)
    {
        printf("\n\n *** THE WINNER OF THE GAME IS %s ***",name);

    }else{
        printf("\n\n *** THE WINNER OF THE GAME IS COMPUTER *** ");
    }
}

int main()
{
    char var;
    int zero = 0;
    int count = 0;
    printf("Enter you name :: ");scanf("%s",name);getchar();
    for (zero; zero <= 2; zero++)
    {
        printf("\n'r' for 'Rock'\n'p' for 'Paper'\n's' for 'Scissor'\nEnter the word :: ");
        // user = getchar();
        scanf("%c", &user);
        getchar();
        var = rrandom();
        int pointer = game(user, var);
        check(pointer);
        //   printf("%d",count);scanf("%d",&count);
    }
    return 0;
}
