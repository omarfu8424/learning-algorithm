#include<stdio.h>
int main()
{
    int a=1;
    int b=0;
    int x=0;
    int y=0;
    if (a==1)if(b==1) x++;
    else y++;//else对应最近的if
    printf("%d %d",x,y);
    return 0;


}