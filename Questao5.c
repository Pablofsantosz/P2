#include <stdio.h>
int buscarX(int matriz[5][5],int numero_buscado,int *linhaX,int *colunaX){
    for(int i = 0 ; i<5 ; i++){
        for(int j =0 ; j<5 ; j++){
            if(matriz[i][j]==numero_buscado){
                *linhaX=i;
                *colunaX=j;
                return 0;
            }
        }
    
    }
    return -1 ;
}
int main (){
    int matriz[5][5] ={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    int numero_buscado;
    int linhaX,colunax;
    printf(" informe o valor que voce quer buscar na matriz 4x4 , o valor do X  :\n");
    scanf("%d",&numero_buscado);

    printf("");

    for( int i = 0 ;i<5;i++){
        for( int j =0;j<5;j++){
            printf("%4d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");


    int resultado = buscarX(matriz,numero_buscado,&linhaX,&colunax);
    if(resultado==-1){
        printf(" o numero nao foi encontrado %d.\n",numero_buscado);
    }else{
        printf("O numero buscado %d esta na posição [%d][%d]:\n",numero_buscado,linhaX,colunax);
    }
}