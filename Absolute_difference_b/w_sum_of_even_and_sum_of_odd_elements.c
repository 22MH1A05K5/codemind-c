#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,a=0;
    scanf("%d",&n);
    int x[n];
   for(int i=0;i<n;i++)
 {
     scanf("%d",&x[i]);
 }  
 for(int i=0;i<n;i++)
 {
     if(x[i]%2!=0)
     {
         s=s+x[i];
     }
     else
     {
         a=a+x[i];
     }
 }
 printf("%d",abs(a-s));
}