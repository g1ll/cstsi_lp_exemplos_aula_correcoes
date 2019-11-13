#include <stdio.h>

int main(void){
    //0 1 1 2 3 5 8 ... ti=ti-1+ti-2 

    int t, ant=0, nfi=1, temp;
    printf(" %d %d",ant,nfi);
    for(int i=2;i<20;i++)
    {  
        temp=nfi;
        nfi = nfi+ant;
        ant = temp;
        printf(" %d",nfi);
    }
    printf(" \n");
    return 0;
}