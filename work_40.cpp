#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int str[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&str[i]);
    }
   for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(str[j]>str[j+1])
            {
                int temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    } 
    int d=str[1]-str[0];
    for(int j=2;j<n;j++)
    {
        if(str[j]-str[j-1]!=d)
        {
            printf("no\n");
            return 0;
        }
    }
    printf("%d\n",d);
    return 0;
}