#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo;

    printf("Insira o codigo do produto: ");
    scanf("%d", &codigo);

    switch(codigo){
        case 1:
            printf("Alimento  não perecivel");
            break;
        case 2:
        case 3:
        case 4:
            printf("Alimento perecivel");
            break;
        case 5:
        case 6:
            printf("Vestuario");
            break;
        case 7:
            printf("Higiene Pessoal");
            break;
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            printf("Limpeza e ultencilios domesticos");
            break;
        default:
            printf("Invalido");
            break;
    }


    return 0;
}
