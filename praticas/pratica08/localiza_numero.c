#include <stdio.h>
#include <stdbool.h>

int main (){

    //localizar numero em um vetor
    int numeros[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 10; i++){
        printf("Entre o %iº numero inteiro > ", i+1);
        scanf("%i", &numeros[i]);
        while (getchar() != '\n');
    }
    printf("Numeros digitados: ");
    int numero;
    scanf("%i", &numero);
    while (getchar() != '\n');

    bool encontrado = 0;
    for (int i = 0; i < 10; i++){
        if (numeros[i] == numero){
            printf("Numero encontrado: %i\n", i +1);
            encontrado = 1;
        }
    }
    if (encontrado == 0){
        printf("Numero nao encontrado\n");
    }

    return 0;
}