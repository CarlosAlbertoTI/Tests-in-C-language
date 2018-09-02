#include <stdio.h>
#include <stdlib.h>

int main()
{
   int idade;
   float numeros;
   char letra;

   printf("Insira a idade: ");
   scanf("%d", &idade);

   if(idade >= 16){
        if(idade >= 18){
            printf("Parabens, você pode tirar a carteira de motorista e tambem votar");
        }else{
            printf("Parabens, você pode votar, mas não pode tirar a carteira de motorista");
        }
   }else{
        printf("Desculpa, mas você não pode tirar a carteira de motorista e tambem não pode votar");
   }



    return 0;
}
