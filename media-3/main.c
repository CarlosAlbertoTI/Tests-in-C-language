#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont;
    char cod;
    float nota, media, total;
    total = 0;
    cod = 'C';

    while(cod != 'F'){
        for(cont = 0; cont < 4; cont++){
            printf("Insira a nota: ");
            scanf("%f", &nota);
            total = total + nota ;
        }

        media = total/4;
        printf("A media : %.2f\n\n", media);
        media = 0;
        nota = 0;

        printf("Deseja calcular a media de mais um aluno? Pressione qualquer tecla para prosseguir, ou a tecla 'F' para encerrar o programa: \n");
        cod = getche();
    }
      return 0;
}
