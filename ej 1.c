#include <stdio.h>

int main()
{
    int vector[4];
    for(int x=0; x<5; x++){
        printf("\n Ingrese el valor del vector[%d] = ",x);
        scanf("%d", &vector[x]);
    }
    for(int x=0; x<5; x++){
        printf("\n Vector[%d] = %d",x, vector[x]);
    }
    for(int x=4; x>0; x--){
        printf("\n Vector[%d] = %d",x, vector[x]);
    }

    system("pause");

    return 0;
}