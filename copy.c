#include<stdio.h>
void main()
{
    FILE *fptr1,*fptr2;
    int c=0;
    char ch;
    fptr1=fopen("a.txt","r");
    fptr2=fopen("b.txt","w");
    if(fptr1==NULL||fptr2==NULL)
    {
        printf("file not found");
    }
    else{
        while((ch=fgetc(fptr1))!=EOF)
        {
            fputc(ch,fptr2);
            c++;
        }
    }
    fclose(fptr1);
    fclose(fptr2);
    printf("total characters:%d",c);
}