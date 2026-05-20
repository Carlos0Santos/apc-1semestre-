#include <stdio.h>

int main (){
    int nota;
    printf("Digite uma nota entre 0 e 10: ");
    scanf("%i", &nota);
    while (getchar() != '\n');
    while (nota < 0 || nota > 10){
        printf("Nota invalida! Tente novamente.\n");
        scanf("%i", &nota);
        while (getchar() != '\n');
    }

    return 0;
}