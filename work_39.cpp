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
    int flag=0;
    for(int a=0;a<m;a++)
    {
        int min_index=0;
        int min_value=str[a][0];
        for(int b=1;b<n;b++)
        {
            if(str[a][b]<min_value)
            {
                min_value=str[a][b];
                min_index=b;
            }
        }
        int c;
        for(c=0;c<m;c++)
        {
            if(str[c][min_index]>min_value)
            {
                break;
            }
        }
        if(c==m)
        {
            printf("%d %d %d\n",a,min_index,min_value);
            flag=1;
            // 如果只想找第一个鞍点，取消下面一行的注释以跳出：
            // goto END;
        }
    }
    if(flag==0)
    {
        printf("no\n");
    }
    return 0;
}