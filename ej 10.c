#include <stdio.h>

int main()
{
    int vec1[7];
    int vec2[7];

    for (int i = 0; i<8; i++){
        printf("\nIngrese DNI del jugador %d: ", i);
        scanf("%d",&vec1[i]);
    }
    for (int i = 0; i<8; i++){
        printf("\nIngrese DNI del jugador %d: ", i+8);
        scanf("%d",&vec2[i]);
    }
    for (int i = 0; i<8; i++){
        printf("\npareja N.%d: %d y %d", i, vec1[i], vec2[7-i]);
    }
    return 0;
}