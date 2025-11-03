#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    for(int i=1;;i++)
    {
        if(i<10) continue;
        if(i>100) break;
        if(i%3==a&&i%5==b&&i%7==c) {printf("сп%d\n",i);break;}
        if(i==100)
        printf("нч");
        
    }
    return 0;
}