#include <stdio.h>

int main (){
    int numeros [10];

    numeros[0] = 10;

    numeros[1] = 6;

    numeros[2] = 7;

    numeros[3] = 0;

    numeros[4] = 5;

    numeros[5] = 3;

    numeros[6] = 2;

    numeros[7] = 1;

    numeros[8] = 8;

    numeros[9] = 9;
    
    for (int i = 0; i < 10; i++){
        printf("%i\n", numeros[i]); 
    }

    char nome [100];
    printf("Digite seu nome: ");
    scanf("%[^\n]s", nome);
    printf("Ola, %s!\n", nome);
    float notas [3];
    printf("Entre com as suas notas do boletim: ");
    for (int i = 0; i < 3; i++){
        printf("Nota %i: ", i + 1);
        scanf("%f", &notas[i]);
        while (getchar() != '\n');
    }
    printf("Suas notas são: \n");
    for (int i = 0; i < 3; i++){
        printf("A%i = %.1f\n", i + 1, notas[i]);
    }

   
    return 0;
}