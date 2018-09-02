#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, con, acm;
    float mnp;

    con = 0;
    acm = 0;
    n = 1;

    while(n > 0){
       printf("Digite um numero: ");
       scanf("%d", &n);

       if( (n > 0) && (n%2 == 0)){
            acm = acm + n;
            con++;
       }
    }
    if(con > 0){
        mnp = acm/con;
        printf("Media: %f", mnp);
    }else{
        printf("Nenhum par foi fornecido");
    }


    return 0;
}
