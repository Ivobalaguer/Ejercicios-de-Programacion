#include <stdio.h>

int main()
{
    int A[10];
    int B[10];
    int C[10];
    int cont=0;
    int k=0;
    for (int i = 0; i<10; i++){
        printf("\nIngrese los valores de A[%d]: ", i);
        scanf("%d",&A[i]);
    }
    for (int i = 0; i<10; i++){
        B[i]=A[i];
        cont=0;
        for (int j = 0; j<10; j++){
            if (A[i]==B[j]){
                cont++;
            }
        }
        if (cont==1){
            C[k] = A[i];
            printf("\nA[%d]: %d", i, C[k]);
            k++;
        }
    }
    return 0;
}