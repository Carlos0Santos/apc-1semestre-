#include <stdio.h>

int main (){

    int matriz [3][3];
    printf("Preencha a matriz 3x3: \n");
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Entre com a posicao [%d][%d]: \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nA diagonal principal é: \n");
    for (int i = 0; i < 3; i++){
        printf("%d ", matriz[i][i]);
    }

    printf("\n");

    return 0;
}