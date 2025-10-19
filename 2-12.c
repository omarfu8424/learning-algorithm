#include<stdio.h>
int main()
{
    int x,max,min,n,sum,k=0;
    while(scanf("%d",&n)==1&&n)
    {
        sum=0;
        for(int i=1;i<=n;i++){
            scanf("%d",&x);
            if(i==1) {max=x;min=x;}
            if (x<min) min=x;
            if (x>max) max=x;
            sum+=x;
            k+=1;
            
        }
        if(k) {printf("\n");
        printf("%d %d %.3f",min,max,(float)sum/n);}
    }
    return 0;
}