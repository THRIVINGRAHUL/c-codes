#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int id;
    int marks;
};
struct student s1, s2;
typedef struct student rahul;// typedef 
int main()
{
    printf("enter your Name :: ");
    gets(s1.name);
    s1.marks = 25;
    s1.id = 20332;
    printf("%s has %d marks in math \n", s1.name, s1.marks);
    printf("and have id number %d\n\n", s1.id);
    rahul s2 = {"arsh", 3982, 34};// in an single line (we need to use struct <declared name of structure> then member of struct)
    struct student s3 = {.name = "Harjinder", .marks = 20, .id = 2903}; // dsignated initialization
    printf("%s %d %d \n", s2.name, s2.id, s2.marks);
    printf("%s %d %d \n", s3.name, s3.id, s3.marks);
    // puts(strcpy(S2.name,"shaminder"));
    // printf("%s\n",S2.name);
    // puts(S2.name);
    return 0;
}