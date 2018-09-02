#include <stdio.h>

int main()
{
    int nota1;
    int nota2;
    int resultado;

    printf("Digite o primeiro numero:  ");
    scanf("%i", &nota1);

    printf("Digite o segundo numero:  ");
    scanf("%i", &nota2);

    resultado = (nota1 + nota2)/2;

    if( resultado >= 7 ){
      print("Aprovado");
    }else if( resultado >= 5 ){
       printf("recuperação");
    }else if( resultado < 5){
        printf("reprovado");
    }

    return 0;
}
