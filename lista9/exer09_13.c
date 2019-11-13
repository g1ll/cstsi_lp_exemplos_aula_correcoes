#include<stdio.h>

int main(void){
    int anos=0;
    float pa=500,pb=1500;

    while(pa<=pb){
        printf("\n%d %.2f %.2f",anos,pa,pb);
        pa+=pa*0.052;
        pb+=pb*0.018;
        anos++;
    }
    printf("\n%d %.2f %.2f\n",anos,pa,pb);

    return 0;
}