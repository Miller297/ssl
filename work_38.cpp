#include<stdio.h>
#include<string.h>
int digits(char str[])
{
    int sum=0;
    for(int i=0;i<strlen(str);i++)
    {
        sum+=int(str[i] - '0');
    }
    return sum;
}   
int main()
{
   char str[100]={0};
   scanf("%s",str);
    int len=strlen(str);
    char reversed_str[100]={0};
    for(int i=0;i<len;i++)
    {
        reversed_str[i]=str[len-1-i];
    }
    if(strcmp(str,reversed_str)==0)
    {
        printf("%d\n",digits(str));
    }
    else
    {
        printf("no\n");
    }
    return 0; 
}