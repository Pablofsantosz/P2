#include <stdio.h>

int main (){
    int matriz_A[3][3] ={{4,5,6},{15,12,13},{1,2,3}};
    int matriz_B[3][3]={{9,10,11},{2,1,9},{1,2,3}};
    int matriz_C[3][3];
    

    printf("Matriz A:\n");
    for(int i = 0 ;i<3; i++){
        for(int j = 0 ;j<3 ;j ++){
            printf("%4d",matriz_A[i][j]);
        }
    printf("\n");
    }
    printf("\n\n");
    printf("Matriz B:\n");
    for(int i = 0 ;i<3; i++){
        for(int j = 0 ;j<3 ;j ++){
            printf("%4d",matriz_B[i][j]);
        }
    printf("\n");
    }
    
    for(int i = 0 ;i<3; i++){
        for(int j = 0 ;j<3  ;j ++){
            matriz_C[i][j] = matriz_A[i][j]*matriz_B[i][j];
        }
    }
    printf("\n\n");
    printf("matriz C:\n");
    for(int i = 0 ;i<3; i++){
        for(int j = 0 ;j<3 ;j ++){
            printf("%4d",matriz_C[i][j]);
        }
    printf("\n");
    }
    return 0 ;
}