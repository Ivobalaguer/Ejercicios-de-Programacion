#include <stdio.h>

int main()
{
    int vec[9];

    for (int i = 0; i<10; i++){
        if (i%2==0){
            vec[i]=1;
        }
        else{
            vec[i]=0;
        }
    }
    for (int i = 0; i<10; i++){
        printf("\nvec[%d] = %d",i,vec[i]);
    }
    return 0;
}