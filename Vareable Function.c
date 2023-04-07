#include<stdio.h>
#include<string.h>
struct person{
char name[20];
int age;
};
int main ()
{
    struct person person1,person2;
    gets(person1.name);
    scanf("%d",&person1.age);
    fflush(stdin);
    gets(person2.name);
    scanf("%d",&person2.age);
    printf("%s\n",person1.name);
    printf("%d\n",person1.age);
    printf("%s\n",person2.name);
    printf("%d\n",person2.age);
    return 0;
}
