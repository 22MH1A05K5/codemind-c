#include<stdio.h>
int main()
{
        int x,rem,r=0;
        scanf("%d",&x);
        int tp=x;
        while(x!=0)
        {
            rem=x%10;
            r=r*10+rem;
            x=x/10;
        }
            printf("%d",r);
}