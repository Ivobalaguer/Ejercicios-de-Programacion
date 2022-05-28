#include <stdio.h>

int main()
{
    int vector[9];
    for (int i=0; i<10; i++){
        printf("\nIngrese un entero vector[%d]: ", i);
        scanf("%d", &vector[i]);
    }
    for (int j=0; j<10; j++){
        if ((vector[j]%2)==0){
            vector[j] = 0;
        }
        printf("\nVector[%d] = %d", j, vector[j]);
    }
    return 0;
}