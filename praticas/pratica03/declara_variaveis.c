#include <stdio.h>

int main () {

    int idade;
    char sexo; // variavel com 1 caractere
    float peso;
    float altura; 


    printf("Coloque sua idade: "); 
    scanf (" %i", &idade);
    while (getchar()!= '\n'); // limpar o buffer

    printf("Coloque seu sexo (F ou M): "); 
    scanf (" %c", &sexo);
    while (getchar()!= '\n');

    printf("Coloque seu peso: "); 
    scanf (" %f", &peso);
    while (getchar()!= '\n');

    printf("Coloque sua altura: "); 
    scanf (" %f", &altura);
    while (getchar()!= '\n');


    printf("Idade: %i\nSexo: %c\nPeso: %.2fcm\nAltura: %.2fkg", idade,sexo,peso,altura);

    return 0;
}