#include <stdio.h>

int main()
{
    float precio[5];
    float ghz[5];
    float mascaro = 0;
    float masghz = 0;
    int poscaro;
    int posghz;
    for (int i = 0; i<5; i++){
        printf("\nIngrese el precio del procesador[%d]: ", i);
        scanf("%f",&precio[i]);
        printf("\nIngrese los ghz del procesador [%d]: ", i);
        scanf("%f",&ghz[i]);
    }
    for (int i = 0; i<5; i++){
        if (precio[i]>=mascaro){
            mascaro=precio[i];
            poscaro = i;
        }
        if (ghz[i]>=masghz){
            masghz=ghz[i];
            posghz = i;
        }
    }
    if (posghz==poscaro){
        printf("El procesador mas caro es tambien el mas veloz");
    }
    else{
        printf("El procesador mas caro no es el mas veloz");
    }
    return 0;
}