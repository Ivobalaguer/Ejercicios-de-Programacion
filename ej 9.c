#include <stdio.h>

int main()
{
    int A[5];
    int B[5];
    int emp=0;
    for (int i = 0; i<5; i++){
        printf("\nIngrese los goles del equipo 1 en el partido %d: ",i);
        scanf("%d",&A[i]);
        printf("\nIngrese los goles del equipo 2 en el partido %d: ",i);
        scanf("%d",&B[i]);
    }
    for (int i = 0; i<5; i++){
        if (A[i]==B[i]){
            emp++;  
        }
    }
    printf("\nHa habido %d empates.", emp);
    return 0;
}