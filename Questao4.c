#include <stdio.h>

int main (){
    int matriz[4][4] ={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int maior = 0;
    int coluna;
    int linha;

    for( int i = 0 ;i<4;i++){
        for( int j =0;j<4;j++){
            printf("%4d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    


    for( int i = 0 ;i<4;i++){
        for( int j = 0 ;j<4;j++){
            if(matriz[i][j]>maior){
                maior = matriz[i][j];
                coluna=j;
                linha =i;
            }
        }
    }
    printf(" o maior termo da matriz 4x4 foi o %d:\n",maior);
    printf(" o termo esta na posição [%d][%d] :\n",linha,coluna );

}