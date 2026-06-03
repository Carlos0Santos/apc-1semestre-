#include <stdio.h>
#include <string.h>

int main (){

    char nome1 [100];
    char nome2 [100];
    printf("Digite o primeiro nome: ");
    scanf("%[^\n]s", nome1);
    while (getchar() != '\n');

    printf("Digite o segundo nome: ");
    scanf("%[^\n]s", nome2);
    while (getchar() != '\n');

    char nome_completo [200];
    strcpy(nome_completo, nome1);
    strcat(nome_completo, " ");
    strcat(nome_completo, nome2);
    printf("Nome completo: %s\n", nome_completo);

    return 0;
}