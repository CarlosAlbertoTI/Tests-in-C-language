#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, chute, tent;
    tent = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while(num != chute){
         printf("Digite o seu chute: ");
         scanf("%d", &chute);

        tent++;
            if(chute > num){
                printf("Chutou Alto!\n");
            }else if(chute < num){
                printf("Chutou Baixo!\n");
            }
    }
    printf("Voce acertou!!!!\n O numero era: %d \n Voce tentou %d vezes", chute, tent);

    return 0;
}
