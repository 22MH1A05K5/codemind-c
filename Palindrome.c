#include<stdio.h>
int main()
{
    int i,n,r=0,rem;
    scanf("%d",&n);
    int tp=n;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        r=r*10+rem;
    }
    if(r==tp)
    printf("True");
    else
    printf("False");
}