#include <stdio.h>

int main (){
    int matriz[4][4];
    int valores_maiores10 = 0;
    for (int i = 0;i < 4; i++ ){
        for(int j = 0; j < 4;j ++){
            printf(" informe o numero na posição [%d][%d]:\n",i,j);
            scanf("%d",&matriz[i][j]);
            if(matriz[i][j]>10){
                valores_maiores10 +=1;
            }

        }
    }
    for (int i = 0;i< 4; i++ ){
        for(int j = 0; j<4;j ++){
            printf(" o valor dentro da matriz na posição [%d][%d] é :%d\n",i,j,matriz[i][j]);
        }
    }
    printf("os numeros maiores que 10 foram :%d",valores_maiores10);



}