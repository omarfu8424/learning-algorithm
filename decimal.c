#include<stdio.h>
int main()
{
    float a,b;
    int c;
    int k=0;
    while(scanf("%f %f %d",&a,&b,&c)==3&&a&&b&&c)
    {
        double dec=a/b;

        if(k) printf("\n");
        printf("Case %d:%.*f",++k,c,dec);
    }
    return 0;
}