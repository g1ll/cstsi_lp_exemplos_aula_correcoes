#include<stdio.h>

int main(void){
    int a,b;
    a=0;
    b=0;
    while(a==b){
        do{
            if(a<2){
                if(b<2){
                    printf("\n%d",a);            
                }else{
                    a=a+5;
                }
                b=b+2;
            }else{
                printf("\n %d, %d",a,b);
                if(a>b){
                    b = b+a;
                }
            }
        }while(b<=8);
        printf("\n%d",b);
    }
}