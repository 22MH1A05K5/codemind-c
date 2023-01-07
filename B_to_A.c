#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d%d",&a,&b);
    for(int i=b;i>=a;i--)
    {
        printf("%d ",i);
    }
}