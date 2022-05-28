#include <stdio.h>
//tu no mete cabra sarambambiche
int main()
{
    int edades[5];
    float sueldos[5];
    int acum1 = 0;
    float acum2 = 0;
    int pos1=0;
    int pos2=0;
    for (int i=0; i<6; i++){
        printf("\nIngrese la edad[%d]: ", i);
        scanf("%d", &edades[i]);
        printf("\nIngrese el sueldo[%d]: ", i);
        scanf("%f", &sueldos[i]);
    }
    for (int j=0; j<6; j++){
        if (edades[j]>acum1){
            acum1 = edades[j];
            pos1 = j;
        }
        if (sueldos[j]>acum2){
            acum2 = sueldos[j];
            pos2 = j;
        }
    }
    printf("\nLa mayor edad esta en la posicion edades[%d] y el mayor sueldo en sueldos[%d]", pos1, pos2);
    if (pos1 == pos2){
        printf ("\nLa persona mas mayor es la que mas gana");
    }
    return 0;
}