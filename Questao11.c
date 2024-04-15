#include <stdio.h>

int main (){
    
    int N_linhas = 3;
    int matriz[3][3]={{3,6,9},{12,15,18},{21,24,27}};
    int Soma_diag_secum = 0;
    
    
    for(int i= 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++){
            if(i + j == N_linhas - 1){
                Soma_diag_secum +=matriz[i][j];
            }
        }
    }
    for(int i= 0 ; i<3 ; i++){
        for(int j = 0 ;j<3 ; j++){
            printf("%4d",matriz[i][j]);
        }
    printf("\n");
    }
    printf("O somatorio de numeros da diagonal secundaria é :%d",Soma_diag_secum);

}