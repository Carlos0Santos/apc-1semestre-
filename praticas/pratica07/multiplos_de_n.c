#include <stdio.h>

int main (){

    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);
    while (getchar() != '\n'); 
    printf("Multiplos de %i: \n", numero);
    for (int i = 1; i <= 100; i++){
        if (i % numero == 0){
            printf("%i\n", i);
        }
    }
   



    return 0;
}