#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b+c&&b<=a+c&&c<=a+b)
        if (a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
            printf("yes");
        else
            printf("no");
    else printf("not a triangle");
    return 0;
}