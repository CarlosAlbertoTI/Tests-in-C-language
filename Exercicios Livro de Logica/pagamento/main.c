#include <stdio.h>
#include <stdlib.h>

void main()
{
    float valor;
    float ope = 0;
    float ope2;
    int cod_pagamento;

    printf("Insira o valor do produto: R$");
    scanf("%f", &valor);

    printf("Insira a forma de pagamento: ");
    scanf("%d", &cod_pagamento);

    switch(cod_pagamento){
        case 1:
            printf("Voce vai pagar R$ %.2f", valor-((10.0/100.0)*valor));
            break;
        case 2:
            printf("Voce vai pagar R$ %.2f", valor-((5.0/100.0)*valor));
            break;
        case 3:
            printf("Voce vai pagar R$ %.2f", valor);
            break;
        case 4:
            printf("Voce vai pagar R$ %.2f", valor+((10.0/100.0)*valor));
            break;
        default:
            printf("Selecione uma das opções para realizar o pagamento");
            break;
    }

    ope = 0;
}
