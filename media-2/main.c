#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont;
    float nota,total,media;
    total = 0;

    for(cont = 0; cont < 4; cont++){
        printf("Digite a nota: ");
        scanf("%f", &nota);
        total = total + nota;
    }

    media = total / cont;
    printf("A media das notas e: %.2f", media);


   return 0;
}
