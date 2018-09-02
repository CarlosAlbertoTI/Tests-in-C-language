#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;
    char ope;

    printf("insira o primeiro numero: ");
    scanf("%f", &num1);

    printf("insira o segundo numero: ");
    scanf("%f", &num2);

    printf("\n\nQual operacao deseja fazer \n[+]Soma [-]Subtrair \n[*]Multiplicar [/]Dividir: \n");
    scanf("%s", &ope);


    switch(ope){

        case '+':
            printf("A soma dos numero e igual a: %.2f ",num1+num2);
            break;
        case '-':
            printf("A subtraçao dos numero e igual a: %.2f ",num1-num2);
            break;
        case '*':
            printf("A multiplicacao dos numero e igual a: %.2f ",num1*num2);
            break;
        case '/':
            printf("A divisao dos numero e igual a:%.2f ",num1/num2);
            break;
        default:
            printf("Escolha uma das opçoes para efetuar a operacao");
            break;

    }


    return 0;
}
