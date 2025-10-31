#include<stdio.h>
#include<math.h>
int main()
{
    for(int i=1;;i++)
    {
        if(i<100) continue;
        if(i>999) break;
        if(i==pow(i/100,3)+pow((i%100)/10,3)+pow(i%10,3)) printf("%d\n",i);
    }
    return 0;
}