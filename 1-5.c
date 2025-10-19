#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    a=95*n;
    if(a<300) printf("%d",a);
    else printf("%.2f",a*0.85);
    return 0;
}