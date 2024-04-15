#include <stdio.h>
void Soma_matrizes(int matriz_1[][2],int matriz_2[][2],int matriz_resultante[][2]){
    for(int i=0 ;i<2 ;i++){
        for(int j = 0 ;j<2; j++){
            matriz_resultante[i][j]=matriz_1[i][j]+matriz_2[i][j];
            
        }
    }
}
void imprimir_matriz(int matriz[][2]){
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}
void subtracao_M(int matriz_1[][2],int matriz_2[][2],int matriz_resultante[][2]){
    for(int i = 0 ;i<2;i++ ){
        for(int j =0 ; j < 2; j++){
            matriz_resultante[i][j]= matriz_1[i][j]-matriz_2[i][j];
        }
    }
}




int main(){
    int matriz_1[2][2]={{1,2},{3,4}};
    int matriz_2[2][2]={{5,6},{7,8}};
    int matriz_resultante[2][2]; 
    int numero_informado;

    printf("Informe a Opção desejada:\n1-soma das duas matrizes: \n2-subtrair as duas matrizes: \n3-imprimir as duas matrizes:\n");
    scanf("%d",&numero_informado);
   
    //SOma das duias matrizes:
    if(numero_informado==1){
        Soma_matrizes(matriz_1,matriz_2,matriz_resultante);
        printf(" matriz resultante da soma foi :\n");
        imprimir_matriz(matriz_resultante);
    
   //
    }else if(numero_informado==2){
            subtracao_M(matriz_1,matriz_2,matriz_resultante);
            printf("entao a subtração das matrizes foi :\n");
            imprimir_matriz(matriz_resultante);
        

    }else if(numero_informado==3){
        printf("matriz 1:\n");
        imprimir_matriz(matriz_1);
        printf("\n\n");
        printf("matriz 2 :\n");
        imprimir_matriz(matriz_2);
    }
}
    

