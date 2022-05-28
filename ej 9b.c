#include <stdio.h>

int main()
{
    int A[5];
    int B[5];
    int emp=0;
    int winsa=0;
    int winsb=0;
    for (int i = 0; i<5; i++){
        printf("\nIngrese los goles del equipo 1 en el partido %d: ",i);
        scanf("%d",&A[i]);
        printf("\nIngrese los goles del equipo 2 en el partido %d: ",i);
        scanf("%d",&B[i]);
    }
    for (int i = 0; i<5; i++){
        if (A[i]>B[i]){
            winsa++;  
        }
        else if (A[i]==B[i]){
            emp++;
        }
        else if (A[i]<B[i]){
            winsb++;
        }
    }
    printf("\nEl equipo 1 gano %d partidos, el equipo 2 gano %d partidos y hubo %d empates", winsa, winsb, emp);
    
    if (winsa>winsb){
        printf("\nEl equipo 1 gano.");  
    }
    else if (winsa<winsb){
        printf("\nEl equipo 2 gano.");
    }
    else{
        printf("\nHubo un empate.");
    }
    return 0;
}