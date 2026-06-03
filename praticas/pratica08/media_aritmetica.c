#include <stdio.h>

int main (){

    printf("**********");
    printf("Media Aritmética");
    printf("**********\n");

    printf("Digite numeros para calcular a média aritmética: \n");

    int numeros[100];
    for (int i = 0; i < 100; i++){
        printf("Numero %i: ", i + 1);
        scanf("%i", &numeros[i]);
        while (getchar() != '\n');
        if (numeros[i] == 00){
            break;
        }
    }
    int soma = 0;
    for (int i = 0; i < 100; i++){
        if (numeros[i] == 00){
            break;
        }
        soma += numeros[i];
    }
    int contador = 0;
    for (int i = 0; i < 100; i++){
        if (numeros[i] == 00){
            break;
        }
        soma += numeros[i];
        contador++;
    }
    
    printf("A média aritmética é: %.2f\n", (float)soma / contador);
    float media = (float)soma / contador;
    printf("A média aritmética é: %.2f\n", media);

    return 0;
}