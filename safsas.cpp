#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]={"Hello, World!"};
    char *q=s1;
    int a,b;
    a=strlen(s1);
    b=strlen(q);
    printf("%d %d\n",a,b);
    return 0;
}