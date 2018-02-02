#include <stdio.h>
#include<string.h>
int main()
{
char str[200];
int count=0,i;
printf("enter the string:");
gets(str);
for(i=0;str[i]!=0;i++)
{
if(str[i] == ' ')
count++;
}
printf("%d",count);
return 0;
}
