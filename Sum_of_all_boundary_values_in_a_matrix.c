#include <stdio.h>
int main ( )
{
    int n,m,j,i,su=0;
    scanf( "%d%d",&n,&m) ;
    int a[n][m],s=0;
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]) ;
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            s=s+a[i][j];
        }
    }
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<m-1;j++)
        {
            su=su+a[i][j];
        }
    }
    printf("%d",s-su);
    
}
