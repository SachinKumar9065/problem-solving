#include<stdio.h>
void main()
{
    int l=0,i;
    char str[20];
    printf("ENTER STRING: ");
    gets(str);
    for(i=0;str[i]!='\0';i++){
            l++;
    }
      
        printf("%d",l);
    
}