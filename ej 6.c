#include <stdio.h>

int main()
{
    int dni[9];
    float notas[9];
    for (int i = 0; i<10; i++){
        printf("\nIngrese el Dni del alumno[%d]: ", i);
        scanf("%d",&dni[i]);
        printf("\nIngrese la nota del alumno[%d]: ", i);
        scanf("%f",&notas[i]);
    }
    printf("\nDni de los alumnos aprobados: ");
    for (int i = 0; i<10; i++){
        if (notas[i]>=6){
            printf("\n%d", dni[i]);
        }
    }
    return 0;
}
