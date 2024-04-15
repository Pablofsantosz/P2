#include <stdio.h>

int main (){
    int matriz_1[4][4]={{10,20,30,40},{1,2,3,4},{70,80,90,100},{5,6,9,11}};
    int matriz_2[4][4]={{11,19,31,44},{3,4,1,2},{65,81,91,99},{6,5,8,12}};
    int matriz_3[4][4];
    
    printf("Matriz_1 :\n");
    for (int i = 0;i<4;i++){
        for(int j = 0 ;j<4;j++){
            printf("%4d",matriz_1[i][j]);
        }
    printf("\n");
    }

    printf("\n\n");
    printf("Matriz_2 :\n");
    for (int i = 0;i<4;i++){
        for(int j = 0 ;j<4;j++){
            printf("%4d",matriz_2[i][j]);
        }
    printf("\n");
    }

  for (int i = 0 ; i<4 ; i++){
        for(int j = 0 ; j<4 ; j++){
            if(matriz_1[i][j] >matriz_2[i][j]){
                matriz_3[i][j]=matriz_1[i][j];

            }else if(matriz_2[i][j]>matriz_1[i][j]){
                matriz_3[i][j]=matriz_2[i][j];
            }
        }
    
    }
    printf("\n\n");
    printf("matriz_3:\n");
    for( int i = 0  ;i<4; i++){
        for( int j =0 ; j<4; j++){
            printf("%4d",matriz_3[i][j]);
        }
    printf("\n");
    }

    


}