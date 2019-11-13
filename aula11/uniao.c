#include<stdio.h>

int main(void){
    int q,r,c=0;

    do{
        printf("\nq:");
        scanf("%d",&q);
    }while(q<1||q>10);

    do{
        printf("\nr:");
        scanf("%d",&r);
    }while(r<1||r>10);

    int a[q],b[r];

    printf("\na:");
    for(int i=0;i<q;i++)scanf("%d",&a[i]);

    printf("\nb:");
    for(int i=0;i<r;i++)scanf("%d",&b[i]);

    for(int i=0;i<q;i++){
           for(int j=0;j<r;j++){
                if(a[i]==b[j])
                    c++;
           } 
    }
    
    int s=q+r-c,u[s],n,f;

    for(int i=0;i<q;i++){
            u[i] = a[i];
    }  
    n = q;
    
    for(int j=0;j<r;j++,f=0){
        for(int k=0;k<q;k++){
            if(b[j]==u[k]) f=1;
        }
        if(f==0){
            u[n] = b[j];
            n++;
        }
    }

    printf("\n");
    for(int i=0;i<s;i++)printf(" %d",u[i]);
    printf(" (Vetor U)\n\n\n");
    return 0;
}





    