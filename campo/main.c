#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x  =  450;
    float f = 250.12345;
    char s[] = "Boson Treinamentos";

    printf("Precisao em inteirtos: \n");
    printf("%10.5d \n", x);
    printf("%15.12d \n", x);

    printf("\n\nPrecisao em ponto-flutuante");
    printf("%8.2f \n", f);

    printf("Precisao em string: \n");
    printf("%10.5s \n", s);
    printf("Sinal sonoro : \a");

    return 0;
}
