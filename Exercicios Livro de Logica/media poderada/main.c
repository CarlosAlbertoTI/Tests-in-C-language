#include <stdio.h>
#include <stdlib.h>

int main()
{
    int con,num1,acm,peso;
    float media;
    con = 1;
    acm = 0;

    while(con <= 5){
        printf("Digite a nota: ");
        scanf("%d", &num1);

        acm = acm + num1;
        con++;
    }
        printf("\nQual o peso que vai ser usado nas notas:\n [1][2][3][4][5]\n\n");
        scanf("%d", &peso);

        media = (acm/5)*peso;
        printf("A media com peso %d e igual a: %.2f",peso, media);


    return 0;
}
