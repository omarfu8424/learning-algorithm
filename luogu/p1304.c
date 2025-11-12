#include <stdio.h>
#include <math.h>
int isprime(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int n;
int main()
{
    scanf("%d",&n);
    for(int j=4;j<=n;j+=2){
        for(int i=1;i<=j;i++){
            if(isprime(i)&&isprime(j-i)){
                printf("%d=%d+%d\n",j,i,j-i);
                break;
            }
        }
    }
    return 0;
}