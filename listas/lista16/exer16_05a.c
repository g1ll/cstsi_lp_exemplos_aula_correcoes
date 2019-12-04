#include<stdio.h>

const double PI = 3.14159265359;

void exibeSeno(int ang,int t);

int main(void){    
    exibeSeno(45,59999);
    printf("\n\n\n");
    return 0;
}

void exibeSeno(int ang,int t){
    float x = ang * PI/180;
    double seno = x;
    for(int i=1;i<=t;i++)
        seno*=1-(x*x)/((i*i)*(PI*PI));

    printf("\nseno(%d) = %f\n",ang,seno);
}