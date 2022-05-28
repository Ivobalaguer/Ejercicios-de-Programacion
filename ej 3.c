#include <stdio.h>

int main()
{
    float vector[4];
    for(int x=0; x<5; x++){
        printf("\n Ingrese el valor del vector[%d] = ",x);
        scanf("%f", &vector[x]);
    }
    for(int j=0; j<5; j++){
        printf("\n vector[%d] = %.2lf",j, vector[j]);
    }
    for(int i=0; i<5; i++){
        vector[i] = vector[i] * 1.65;
    }
    for(int k=0; k<5; k++){
        printf("\n vector[%d] * 1.65  = %.2lf",k, vector[k]);
    }


    system("pause");

    return 0;
}