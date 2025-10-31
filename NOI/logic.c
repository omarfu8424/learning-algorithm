#include<stdio.h>
int main()
{
    int a=0;
    int b=1;
    int c=1;
    int c1=(a||b);
    int c2=(a&&b);
    int c3=((a&&b)||c);
    int c6=(a&&(b||c));
    int c4=(a&&a==0);
    int c5=((a&&a)==0);
    //==>&&>|| maybe
    printf("%d %d %d %d %d %d\n",c1,c2,c3,c6,c4,c5);
    return 0;
}