#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[50];
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(((str[i]>='a'&&str[i]<='z')|| (str[i]>='A'&&str[i]<='Z'))&&((str[i+1]>='a'&&str[i+1]<='z')|| (str[i+1]>='A'&&str[i+1]<='Z')))
        printf("%c",str[i]);
        else if(((str[i]>='a'&&str[i]<='z')|| (str[i]>='A'&&str[i]<='Z'))&&(str[i+1]=='\0'))
        {
            printf("%c",str[i]);
        }
        else if(str[i]>='0'&&str[i]<='9')
        continue;
        else
        {
            for(int j=atoi(&str[i+1]);j>0;j--)
            {
                printf("%c",str[i]);
            }
        }
    }
    return 0;
}