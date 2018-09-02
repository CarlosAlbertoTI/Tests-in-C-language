#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x = 450;
    float f = 250.12345;
    char s[]  = "Boson Treinamentos";

    printf("Precisao em inteiros: \n");
        printf("%d\n", x);
        printf("%.5d\n", x);
        printf("%.12d\n", x);

    printf("\n\nPrecisao em ponto-flutuante:\n");
        printf("%f\n", f);
        printf("%.2f \n", f);

    printf("\n\n Precisao em literais:\n");
        printf("%s \n", s);
        printf("%.5s \n", s);
        printf("%.18s \n", s);
}
