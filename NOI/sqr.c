#include<stdio.h>
#include<math.h>
int main()
{
    for(int a=1;a<9;a++)
        for(int b=1;b<9;b++)
            for(int c=1;c<9;c++)
        {
        int n=a*110000+b*1100+c*11;
        float b;
        b=sqrt(n);
        float c=floor(b+0.5);
        printf("%d %f %f",n,b,c);
        if(b*b==n) printf("yes   ");else printf("no   ");
        if(b*b==n) printf("y\n");else printf("n\n");
        }
    
    return 0;
}