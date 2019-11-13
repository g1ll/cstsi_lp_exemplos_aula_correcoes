#include <stdio.h>

int main(void){
    //0 1 1 2 3 5 8 ... ti=ti-1+ti-2 

    int t, ant=0, nfi=1, temp;

    printf("\nt: ");
    scanf("%d",&t);
    
    if(t==1){
        printf(" %d\n",ant);
    }else{
        for(int i=2;i<t;i++)
        {  
            temp=nfi;
            nfi = nfi+ant;
            ant = temp;
        }
        printf("fi: %d\n",nfi);
    }
    return 0;
}