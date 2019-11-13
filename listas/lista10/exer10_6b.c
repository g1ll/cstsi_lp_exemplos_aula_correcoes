#include<stdio.h>

int main(void){
    int a,b;
    a=1;
    b=2;
    do{
        if(a==b){
            if(a<0){
                printf("\n%d",a);
            }else{
                if(b>0){
                    printf("\n%d",b);
                }else{
                    printf("\n%d",a);
                }
            }
        }else{
            do{
                a+=b;
                b+=a;
                printf("\n%d,%d",a,b);
            }while(a<=7);
        }
        do{
            for(a = 0;a<15;){ 
                a = a + b +1;
                printf("\n%d",a);}
        }while(b<=10);
        b+=a;
    }while(b<=20);
    printf("\n%d\n",b);
}