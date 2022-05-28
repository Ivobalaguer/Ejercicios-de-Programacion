#include <stdio.h>

int main()
{
    int A[3];
    int B[9];
    int flag1 = 0;
    int flag2 = 0;
    int flag3 = 0;
    for (int i = 0; i<3; i++){
        printf("\nIngrese los valores a encontrar A[%d]: ", i);
        scanf("%d",&A[i]);
    }
    for (int i = 0; i<10; i++){
        printf("\nIngrese los valores en donde buscar B[%d]: ", i);
        scanf("%d",&B[i]);
    }
    
    for (int i = 0; i<10; i++){
        printf("\ncombinacion A[0] y B[%d]: %d y %d",i, A[0], B[i]);
        if ((A[0])==(B[i])){
            flag1=1;
        }
    }
    for (int i = 0; i<10; i++){
        printf("\ncombinacion A[1] y B[%d]: %d y %d",i, A[1], B[i]);
        if ((A[1])==(B[i])){
            flag2=1;
        }
    }
    for (int i = 0; i<10; i++){
        printf("\ncombinacion A[2] y B[%d]: %d y %d",i, A[2], B[i]);
        if ((A[2])==(B[i])){
            flag3=1;
        }
    }

    printf("\nflags %d %d %d", flag1,flag2,flag3);
    
    if (flag1 == 1 && flag2 == 1 && flag3 == 1){
        printf("\nSe pudieron encontrar los 3 valores A entre los valores B");
    }
    else{
        printf("\nNo se pudieron encontrar los 3 valores A entre los valores B");
    }
    return 0;
}