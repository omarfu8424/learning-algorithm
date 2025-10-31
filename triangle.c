#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            if(j>=i&&j<2*n-i) printf("#\n");
            else if(j==2*n-i) printf("#\n");
            else if(j<i) printf(" ");
        }
    }
    return 0;
}