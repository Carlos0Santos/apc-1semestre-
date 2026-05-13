#include <stdio.h>

int main (){

    int numero = 0;

    printf("Entrar com numero inteiro: ");
    scanf("%i",&numero);
    while (getchar()!= '\n');
  
    if(numero %2 ==0){
        printf("Eh um numero %i par: \n",numero);
    }
    else {
        printf("Eh um numero %i impar: \n",numero);
    }

    return 0;
}