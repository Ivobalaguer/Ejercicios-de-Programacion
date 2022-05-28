#include <stdio.h>
int main()
{
    int edades[5];
    float sueldos[5];
    int acum1 = 0;
    int acum2 = 0;
    for (int i=0; i<6; i++){
        printf("\nIngrese la edad[%d]: ", i);
        scanf("%d", &edades[i]);
        printf("\nIngrese el sueldo[%d]: ", i);
        scanf("%f", &sueldos[i]);
    }
    for (int j=0; j<6; j++){
        if (edades[j]>acum1){
            acum1 = j;
        }
        if (sueldos[j]>acum2){
            acum2 = j;
        }
    }
    printf("La mayor edad esta en la posicion edades[%d] y el mayor sueldo en sueldos[%d]", acum1, acum2);
    return 0;
}