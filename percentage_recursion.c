#include<stdio.h>
int calcPercentage(int science,int math,int sanskrit);

int main()
{
int science = 95;
int math = 90;
int sanskrit = 90;
printf("percentage is %d",caclPercentage(science,math,sanskrit));
return 0;
}

int calcPercentage(int science,int math,int sanskrit);
{
    return ((science+math+sanskrit)/3);
}