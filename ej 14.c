#include <stdio.h>

int main()
{
    float A[9];
    float valv = 0;
    int flag=0;
    for (int i = 0; i<9; i++){
        printf("\nIngrese los valores de A[%d]: ", i);
        scanf("%f",&A[i]);
    }
    valv = A[0];
    for (int i = 0; i<9; i++){
        if(A[i]!=valv){
            flag = 1;
        }
    }
    if (flag == 0){
        printf("Todos los valores son identicos");
    }
    else{
        printf("No todos los valores son identicos");
    }
    return 0;
}