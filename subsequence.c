#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,k=0;
    
    while(scanf("%d %d",&n,&m)==2&&n&&m)
    {
        float sum=0;
        for(int i=n;i<=m;i++)
        {
            sum+=pow(i,-2);
        }
        
        if(k) printf("\n");
        printf("Case %d:%.5f",++k,sum);
    }
    return 0;
}