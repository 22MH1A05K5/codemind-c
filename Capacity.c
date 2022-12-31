#include<stdio.h>
int main()
{
    int t,s,b,tc;
    scanf("%d%d%d",&t,&s,&b);
    tc=2*t*s*b*512/1024;
    printf("%d KB ",tc);
}