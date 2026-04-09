#include <stdio.h>

int main () {
    

    printf("Imprima o char: %ld bytes\n",sizeof(char));
    printf("Imprima o short int: %ld bytes\n",sizeof(short int));
    printf("Imprima o int: %ld bytes\n",sizeof(int));
    printf("Imprima o long int: %ld bytes\n",sizeof(long int));
    printf("Imprima o long long int: %ld bytes\n",sizeof(long long int));
    printf("Imprima o float: %ld bytes\n",sizeof(float));
    printf("Imprima o double: %ld bytes\n",sizeof(double));
    printf("Imprima o long double: %ld bytes\n",sizeof(long double));

    return 0;
}