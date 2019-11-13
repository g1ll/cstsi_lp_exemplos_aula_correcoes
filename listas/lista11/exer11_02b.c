#include<stdio.h>

int main(){
    int i;
    float s;

    for(i=1,s=0;i<=10;i++)
        s+=(float)((i%2==0)?-i:i)/(i*i);
        //(TESTE)?V:F;
        
        //IF(teste){
        //    verdadeiro
        //}ELSE{
        //    falso
        //}
    printf("\n%f\n",s);
}