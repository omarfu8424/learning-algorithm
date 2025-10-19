#include<stdio.h>
#include<time.h>
#include<stdlib.h> 
int main()
{
    
    int s=0;
    //scanf("%d",&n);
    for(int i=2;i<=100;i++){
        int n=i;
    do{
    if(n%2!=0) n=3*n+1;
    else n=n/2;
    s=s+1; 
    }while(n!=1);
    printf("%d",s);
    printf(" %.4f\n", (double)clock() / CLOCKS_PER_SEC);}
    
    system("pause"); 
    return 0;

}