#include <stdio.h>

int main () {
/*
==============================
      N O T A    L E G A L
==============================
Produto         Qtd Valor Unit
Camiseta        002      39.99
Calca           001      89.90
Meia Social     003      19.99
==============================
Total                   229.85

*/
    char produto [3] [20] = {"Camiseta","Calca","Meia calca"};
    
    int quantidade [3];
    quantidade[0] = 2;
    quantidade[1] = 1;
    quantidade[2] = 3;

    float valor[4];

    valor[0] = 39.99;
    valor[1] = 89.90;
    valor[2] = 19.99;
<<<<<<< HEAD
=======

    valor[3] = valor[0] + valor[1] + valor[2];

    printf("======================\n");
    printf("      NOTA LEGAl\n");
    printf("======================\n");
    printf("Produto     Qtd Valor Unit\n");
    printf("%s       %.3i      %.2f\n", produto[0],quantidade[0],valor[0]);
    printf("%s       %.3i      %.2f\n", produto[1],quantidade[1],valor[1]);
    printf("%s       %.3i      %.2f\n", produto[2],quantidade[2],valor[2]);
    printf("======================\n");
    printf("total              %.2f\n",valor[3]);

>>>>>>> f74fe6e1ee917d9cdaa0b4c9a380d676d2cbe543

  
    float total;
    total = quantidade[0] * valor[0] +
            quantidade[1] * valor[1] +
            quantidade[2] * valor[2];

    printf("=============================\n");
    printf("      NOTA LEGAl\n");
    printf("=============================\n");
    printf("Produto     Qtd Valor Unit\n");
    printf("%-10s       %03d      %10.2f\n", produto[0],quantidade[0],valor[0]);
    printf("%-10s       %03d      %10.2f\n", produto[1],quantidade[1],valor[1]);
    printf("%-10s       %03d      %10.2f\n", produto[2],quantidade[2],valor[2]);
    printf("=============================\n");
    printf("total              %10.2f\n",total);
<<<<<<< HEAD
=======

>>>>>>> f74fe6e1ee917d9cdaa0b4c9a380d676d2cbe543

    return 0;
}