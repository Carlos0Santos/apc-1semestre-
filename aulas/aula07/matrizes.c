#include <stdio.h>

int main (){

    int tabela[3][3];

    tabela[0][0] = 1;
    tabela[0][1] = 2;
    tabela[0][2] = 3;
    tabela[1][0] = 0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Entre com a posicao [%i][%i]: \n", i, j);
            scanf("%i", &tabela[i][j]);
        }
    }
    printf("A tabela é: \n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%i ", tabela[i][j]);
        }        printf("\n");
    }




    return 0;
}