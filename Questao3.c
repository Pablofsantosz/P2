#include <stdio.h>


int main(){


    int matriz[5][5];

    for ( int i = 0 ;i<5;i++){
        for(int j = 0 ;j<5;j++){
            matriz[i][j]=i*j;

        }
    }

    for (int i = 0;i < 5; i++ ){
        for(int j = 0 ;j< 5 ;j++){
        printf("%4d ",matriz[i][j] );

}  
    printf("\n");

}

}