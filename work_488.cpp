#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count[10]={0};
    for(int i=0;i<n;i++)
    {
        int val = a[i];
        if (val < 0) val = -val;
        int digit = val % 10;
        count[digit]++;
    }
    int max_count=0;
    int max_digit[10]={0};
    int c=0;
    for(int i=0;i<10;i++)
    {
        if(count[i]>max_count)
        {
            max_count=count[i];
        }
    }
    for(int i=0;i<10;i++)
    {
        if(count[i]==max_count)
        {
            max_digit[c]=i;
            c++;
        }
    }
    printf("%d: ",max_count);
    for(int i=0;i<c;i++)
    {
        printf("%d ",max_digit[i]);
    }
    return 0;
}