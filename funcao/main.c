#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void escreverMenssagem(); // prot�tico de uma fun��o
int main()
{
setlocale(LC_ALL,"");

    escreverMenssagem(); //usando uma fun��o
    escreverMenssagem();
    escreverMenssagem();

    return 0 ;
}


 void escreverMenssagem(){ // declarando uma fun��o
    printf("Hello World\n");
    return 0 ;
}
