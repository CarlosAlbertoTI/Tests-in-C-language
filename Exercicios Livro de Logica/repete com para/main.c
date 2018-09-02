#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ma, acm, mat;
    int con;

    con = 0;
    acm = 0;
    ma = 0;

    while(ma != -1){
        printf("Para terminar a operacao digite [-1]: ");
        scanf("%f", &ma);

        if(ma != -1){
            acm = acm + ma;
            con++;
        }
    }
    if(con >0){
        mat  = acm/con;
        printf("A media anual da turma: %.2f", mat);
    }else{
        printf("Nenhuma media valida fornecida");
    }








    return 0;
}
