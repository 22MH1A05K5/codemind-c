#include<stdio.h>
int main()
{
    int size,i,sum=0;
    scanf("%d",&size);
    int a[size];
    //reading of array
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    //printing of array
    for(i=0;i<size;i++)
    {
        if(a[i]%2!=0)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
}