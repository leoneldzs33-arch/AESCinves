#include <stdio.h>

int main(){

    unsigned char matriz[4][4]={
        {0,1,2,3},
        {0,1,2,3},
        {0,1,2,3},
        {0,1,2,3}
    };

    unsigned char temp[4];

    for(int i=1;i<4;i++){

        for(int j=0;j<4;j++){
            temp[j] = matriz[i][(j+i)%4];
        }

        for(int j=0;j<4;j++){
            matriz[i][j] = temp[j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}