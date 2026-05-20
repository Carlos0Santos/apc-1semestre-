#include <stdio.h>

int main (){
    int numero;
    printf("Entre com um numero inteiro: ");
    scanf("%i", &numero);
    while (getchar() != '\n');

    int fatorial = 1;
    for (int i = numero; i > 0; i--){
        printf("Calculando: %i! = %i * %i\n", numero, fatorial, i);
        fatorial *= i;
    }
    printf("O fatorial de %i é %i\n", numero, fatorial);

    return 0;
}