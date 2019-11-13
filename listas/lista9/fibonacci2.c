#include <stdio.h>

int main(void){
    //0 1 1 2 3 5 8 ... ti=ti-1+ti-2 

    int t, ant=0,ult=1,nfi;

    printf("\nt: ");
    scanf("%d",&t);
    
    printf("\n %d",ant);
    if(t>1)printf(" %d",ult);
    for(int i=2;i<t;i++)
    {  
        nfi = ult+ant;
        ant = ult;
        ult = nfi;
        printf(" %d",nfi);
    }
    printf("\n");
    return 0;
}