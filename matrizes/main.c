#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define NUM_L 5
#define NUM_C 4

void main()
{
    setlocale(LC_ALL, "");
    int linha, coluna;

    float notas[NUM_L][NUM_C] = { {4.6, 3.3, 1.8, 9.4},
                                  {6.5, 7.3, 4.4, 9.5},
                                  {3.4, 10.4, 3.8, 5.5},
                                  {1.1, 2.2 ,3.3, 4.4},
                                  {5.5, 6.6 ,7.7 ,8.8} };


    printf("Exibindo o conteúdo da matriz declarada e inicializada:\n\n");

    for(linha = 0; linha < NUM_L; linha++){
        for(coluna = 0; coluna < NUM_C; coluna++){
            printf("%5.1f", notas[linha][coluna]);
        }
        printf("\n");
    }

    printf("\nO valor doo elemento na 2ª linha, 3ª coluna: %4.2f\n", notas[1][2]);
}
