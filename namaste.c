#include<stdio.h>
void namaste();
void bonjour();
int main()
{
    char ch,i;
    printf("enter i for indian and f for french: ");
    scanf("%c",ch);
    if(ch==i)
    {
        namaste();
    }
    else
    {
        bonjour();
    }
    return 0;
}
void namaste()
{
    printf("Namaste\n");
}
void bonjour()
{
    printf("Bonjour\n");
}