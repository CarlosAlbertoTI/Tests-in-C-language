#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, con;
    con = 1;

    printf("Digite o valor da tabuada de multiplicacao: ");
    scanf("%d", &num);

    while(con <= 10){
        printf("%d X %d = %d\n",con, num, con*num);
        con++;
    }
    return 0;
}
