#include<stdio.h>
int main()
{
    int x,y,z,s;
    scanf("%d%d%d",&x,&y,&z);
    x=x*1;
    z=z*2;
    s=y+z;
    if(x<=s)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}