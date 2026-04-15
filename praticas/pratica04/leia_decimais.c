#include <stdio.h>

int main (){

    float nota_a1;
    float nota_a2;

    printf("Digite nota01: ");
    scanf("%f",&nota_a1);
    while (getchar()!= '\n');

    printf("Digite nota02: ");
    scanf("%f",&nota_a2);
    while (getchar()!= '\n');

    printf("Nota: %.1f\nNota: %.1f\n",nota_a1,nota_a2);

    return 0;
}