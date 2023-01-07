#include<stdio.h>
int main()
{
    int x,y,z,i;
    scanf("%d%d%d",&x,&y,&z);
    for(i=y;i<=z;i++)
    {
        printf("%d x %d = %d
",x,i,x*i);
    }
}