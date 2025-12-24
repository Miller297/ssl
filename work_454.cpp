#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        a[i][j]=0;
    }
    for(int i=0;i<n;i++)
    a[i][i]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        putchar('\n');
    }
    return 0;

}