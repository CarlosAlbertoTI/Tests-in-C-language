#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco;
    int codigo;

    printf("Insira o preco do produto: R$"),
    scanf("%f", &preco);

    printf("Insira o codigo do produto: ");
    scanf("%d", &codigo);

    if(codigo == 1){

        printf("\n\nPreco: R$ %.2f \n",preco);
        printf("Procedencia: Sul\n\n");

    }else if(codigo == 2){

        printf("\n\nPreco: R$ %.2f \n",preco);
        printf("Procedencia: Norte\n\n");

    }else if(codigo == 3){

        printf("\n\nPreco: R$ %.2f \n",preco);
        printf("Procedencia: Leste\n\n");

    }else if(codigo == 4){

        printf("\n\nPreco: R$ %.2f \n",preco);
        printf("Procedencia: Oeste\n\n");

    }else if((codigo  == 5 || codigo == 6) || (codigo >=25 && codigo <= 30) ){

        printf("\n\nPreco: R$ %.2f \n",preco);
        printf("Procedencia: Nordeste\n\n");

    }else if(codigo >= 7 && codigo <= 9){

        printf("\n\nPreco: R$ %.2f \n",preco);
        printf("Procedencia: Sudeste\n\n");

    }else if(codigo >= 10 && codigo <= 20){

        printf("\n\nPreco: R$ %.2f \n",preco);
        printf("Procedencia: Centro-Oeste\n\n");

    }else{

        printf("\n\nPreco: R$ %.2f \n",preco);
        printf("Procedencia: Importado\n\n");

    }




    return 0 ;
}

