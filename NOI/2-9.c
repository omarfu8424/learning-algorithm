#include<stdio.h>
int main()
{
    int x,max,min,i=0,sum=0;
   
    while(scanf("%d",&x)==1)
    
    {
        if(i==0) {max=x;min=x;}
        i=i+1;
        
        if (x<min) min=x;
        if (x>max) max=x;
        sum+=x;
        printf("%d %d %.3f\n",min,max,(float)sum/i);

    }
    //printf("%d %d %.3f",min,max,(float)sum/i);
    return 0;
}