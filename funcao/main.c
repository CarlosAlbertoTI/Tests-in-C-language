#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void escreverMenssagem(); // protótico de uma função
int main()
{
setlocale(LC_ALL,"");

    escreverMenssagem(); //usando uma função
    escreverMenssagem();
    escreverMenssagem();

    return 0 ;
}


 void escreverMenssagem(){ // declarando uma função
    printf("Hello World\n");
    return 0 ;
}
