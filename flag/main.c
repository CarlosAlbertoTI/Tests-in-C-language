#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 0;
    float  numero, media, total;
    total = 0;

    printf("Digite um valor: ");
    scanf("%f", &numero);

    while(numero != -1){
        total = total + numero;
        cont++;
        printf("Digite um valor: ");
        scanf("%f", &numero);
    }

    media = total/cont;
    printf("A media e: %.2f", media);
    return 0;
}
