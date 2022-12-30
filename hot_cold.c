#include<stdio.h>
void printHot();
void printCold();

int main()
{
int temp;
printf("ENTER TEMP : ");
scanf("%d",&temp);
if(temp >30)
printHot();
else
printCold();
return 0;
}

void printHot()
{
    printf("hot\n");
}
void printCold()
{
    printf("cold\n");
}