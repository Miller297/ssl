#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int str[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&str[i]);
    }
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        if(str[i]==k)
        {
            printf("%d ",i);
            flag=1;
        }
    }
    if(flag==0)
    printf("-1");
    return 0;
}