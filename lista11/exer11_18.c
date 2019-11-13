#include<stdio.h>

int main(void){

    int n,a,b;

    for(n=1000;n<=9999;n++){
        a =n/100;
        b = n-(n/100)*100;
        if((a+b)*(a+b)==n)
            printf("\n%d | %d + %d = %d | %d² = %d\n",n,a,b,(a+b),(a+b),n);
    }
    return 0;
}