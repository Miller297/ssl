#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int str[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&str[i][j]);
        }
    }
    int length=0;
    int max_length=0;
    for(int i=0;i<m;i++)
    {
        int a=0;
        for(int j=0;j<n;j++)
        {
            if(str[i][j]==1)
            {
                length++;
            }
            else
            {
                if(length>max_length)
                {
                    max_length=length;
                    a=i;
                }
                length=0;
            }

        }
        if(length!=0)
        {
            printf("%d %d\n",a,a-max_length+1);
        }
        else
        {
            printf("-1 -1\n");
        }
    }
    return 0;
}