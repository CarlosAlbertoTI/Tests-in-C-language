/* Iniciando nossa Jornada em C! */
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1,num2,soma;
    printf("Insira o primeiro numero: \n");
    scanf("%d" , &num1);
    printf("Insira o segundo numero: \n");
    scanf("%d" , &num2);

    soma = num1 + num2;

    printf("Soma: %d\n", soma);
}

