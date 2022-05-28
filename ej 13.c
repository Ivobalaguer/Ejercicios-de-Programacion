#include stdio.h

int main()
{
    int A[5];
    int flagcrec=0;
    int flagdecr=0;
    int flagigual=0;
    int valv=0;
    for (int i = 0; i5; i++){
        printf(nIngrese los valores de A[%d] ,i);
        scanf(%d,&A[i]);
    }
    valv = (A[0]);
    for (int i = 0; i5; i++){
        if (A[i]valv){
            flagdecr=1;
        }
        if (A[i]valv){
            flagcrec=1;
        }
        if (A[i]!=valv){
            flagigual=1;
        }
        valv=A[i];
    }
    if (flagigual==0){
        printf(Todos los valores son identicos);
    }
    else if (flagcrec==0){
        printf(El vector es Creciente);
    }
    else if (flagdecr==0){
        printf(El vector es Decreciente);
    }
    else{
        printf(El vector no es monotono);
    }
    return 0;
}