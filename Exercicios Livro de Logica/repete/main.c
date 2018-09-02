#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ma, acm, mat;
    int con;

    con = 0;
    acm = 0;

    while(con < 10){
        printf("Insira a nota do aluno: ");
        scanf("%f", &ma);
        acm = acm +ma;
        con++;
    }

    mat = acm/10;

    printf("A media anual da turma e: %.2f",mat);







    return 0;
}
