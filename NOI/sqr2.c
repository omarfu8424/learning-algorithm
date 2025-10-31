#include<stdio.h>
int main()
{
    for(int i=1;;i++)
    {
        int n=i*i;
        if(n<1000) continue;
        if(n>9999) break;
        int a=n/100;
        int b=n%100;
        printf("%d\n",n);
        if(a/10==a%10&&b/10==b%10) printf("yes");

    }
    return 0;
}