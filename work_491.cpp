#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int count[t]={0};
    int q=0;
    while(t>0)
    {
        int n;
        scanf("%d",&n);
        int a[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[i][j]!=0)
                count[q]=1;
            }
        }
        t--;
        q++;

    }
    for(int i=0;i<q;i++)
    {
        if(count[i]==0)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}
