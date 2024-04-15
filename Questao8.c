#include <stdio.h>
int main(){
    int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int soma =0 ;
    for (int i = 0;i<3;i++){
        for(int j = 0 ;j<3;j++){
            printf("%4d",matriz[i][j]);
        }
    printf("\n");
    }
    // Para somar os termos de cima de uma diagonal principal é preciso que apenas o numero de I (linhas) seja menor que o numero de J (coluna)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
            if (i < j) {
                
                soma += matriz[i][j];
            }
        }
    }
    printf(" o numero da soma dos numeros que estao acima da diagonal principal é :%d",soma);
}