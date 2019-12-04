#include<stdio.h>
#include<math.h>

float areaCirculo(float raio);

int main(void){

    float a,r;

    printf("\nRaio: ");
    scanf("%f",&r);

    printf("Area: %f\n",areaCirculo(r));       
    getchar();
    return 0;
}

float areaCirculo(float raio){
    return M_PI*raio*raio;
}