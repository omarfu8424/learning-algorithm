#include<stdio.h>

#define MAX 100000

int main(){
    int a[MAX]={0};
    int b[MAX]={0};

    int t;
    int num;
    scanf("%d %d",&num,&t);

    a[0]=num;
    a[1]=0;

    int times=t;
    if(t==1)    printf("%d",num);
    else{
        while(times--){

            int* write = b;
            int* read = a;

            int _count,_num;
            _count=_num=0;

            while(*read!=0){
                _num=*read;
                _count=0;

                while(*read==_num){
                    read++;
                    _count++;
                }

                *(write++)=_count;
                *(write++)=_num;
            }

            int lenth = write - b;

            for(int i=0;i<lenth;i++){
                a[i]=b[i];
            }       
            a[lenth]=0;


            if(times==1)for(int i=0;i<lenth;i++){
                printf("%d",b[i]);
            } 
        }
    }

    return 0;

}