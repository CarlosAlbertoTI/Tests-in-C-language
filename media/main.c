#include <stdio.h>
#include <stdlib.h>

void main()
{
    int contador;
    float nota, media,total;
    total = 0;
    contador = 1;

    while(contador <=4){
        printf("Digite a nota:\n");
        scanf("%f", &nota);
        total = nota + total;
        contador++;
    }

    media = total / 4;
    printf("A media e: %.2f \n", media);
}
