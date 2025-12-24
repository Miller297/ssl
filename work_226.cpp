#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(str[i]>str[j])
            {
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("%s",str);
    return 0;
}