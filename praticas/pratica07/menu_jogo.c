#include <stdio.h>

int main (){
    int jogo;

    printf("1 - Novo jogo\n");
    printf("2 - Continuar jogo\n");
    printf("3 - Ver pontuação\n");
    printf("4 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%i", &jogo);
    while (getchar() != '\n');
    switch (jogo){
        case 1:
            printf("Iniciando um novo jogo...\n");
            break;
        case 2:
            printf("Continuando o jogo...\n");
            break;
        case 3:
            printf("Exibindo pontuação...\n");
            break;
        case 4:
            printf("Saindo do jogo. Até a próxima!\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
    }    



    return 0;
}