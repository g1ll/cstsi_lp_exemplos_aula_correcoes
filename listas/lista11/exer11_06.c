#include<stdio.h>

int main(void){
    int a,b,c=0;
    float soma=0;

    do{
        printf("\ninforme a e b: ");
        scanf("%d %d",&a,&b);
    }while(a==b);

    if(a>b){
        for(int i = b;i<=a;i++)
            if(i%3==0){
                soma+=i;
                c++;
            }
            soma/=c;
    }else{
        for(int i = a;i<=b;i++)
            soma+=(i%2!=0)?i:0;
    } 

    printf("\nresultado: %.2f\n",soma);
    return 0;
}