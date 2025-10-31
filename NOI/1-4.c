#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double a;
    const double pi=acos(-1.0);
    scanf("%d",&n);
    a=pi*n/180;
    printf("%f %f %f\n",sin(a),cos(a));
    return 0;
}
