#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ma, acm, mat;
    int con;

    con = 0;
    acm = 0;

    do{
        printf("Digite a media do aluno: ");
        scanf("%f", &ma);
        acm = acm + ma;
        con++;
    }while(con <10);

    mat = acm/con;

    printf("Media anual de uma turma de %d alunos e igual a: %.2f",con, mat);
    return 0;
}
