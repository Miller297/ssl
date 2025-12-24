#include<stdio.h>
int is_same(int n,int a[100][100],int b[100][100])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=b[i][j])
            return 0;
        }
    }
    return 1;
}
int is_rotate_90(int n,int a[100][100],int b[100][100])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=b[j][n-1-i])
            return 0;
        }
    }
    return 1;
}
int is_rotate_180(int n,int a[100][100],int b[100][100])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=b[n-1-i][n-1-j])
            return 0;
        }
    }
    return 1;
}
int is_rotate_270(int n,int a[100][100],int b[100][100])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=b[n-1-j][i])
            return 0;
        }
    }
    return 1;
}
int is_reflect(int n,int a[100][100],int b[100][100])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=b[i][n-1-j])
            return 0;
        }
    }
    return 1;
}
int is_flip_rotate_90(int n,int a[100][100],int b[100][100])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=b[n-1-j][n-1-i])
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[100][100],b[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int flag;
    if(is_same(n,a,b))
    {
        flag=1;
    }
    else if(is_rotate_90(n,a,b))
    {
        flag=2;
    }
    else if(is_rotate_180(n,a,b))
    {
        flag=3;
    }
    else if(is_rotate_270(n,a,b))
    {
        flag=4;
    }
    else if(is_reflect(n,a,b))
    {
        flag=5;
    }
    else if(is_flip_rotate_90(n,a,b))
    {
        flag=6;
    }
    else
    {
        flag=7;
    }
    printf("%d\n",flag);
    return 0;
}