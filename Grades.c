#include<stdio.h>
int main()
{
    int p,c,b,m,cs,per;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    per=(p+c+b+m+cs)/5;
    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80&&per<90)
    {
        printf("Grade B");
    }
    else if(per>=70&&per<90)
    {
        printf("Grade C");
    }
    else if(per>=60&&per<90)
    {
        printf("Grade D");
    }
    else if(per>=40&&per<90)
    {
        printf("Grade E");
    }
    else if(per<40)
    {
        printf("Grade F");
    }
}