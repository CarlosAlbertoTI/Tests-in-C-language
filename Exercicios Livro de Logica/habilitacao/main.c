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
            printf("Parabens, voc� pode tirar a carteira de motorista e tambem votar");
        }else{
            printf("Parabens, voc� pode votar, mas n�o pode tirar a carteira de motorista");
        }
   }else{
        printf("Desculpa, mas voc� n�o pode tirar a carteira de motorista e tambem n�o pode votar");
   }



    return 0;
}
