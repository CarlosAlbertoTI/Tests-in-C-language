#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[4];
    int x, y;
    for(x = 0; x < 4; x++){
        printf("Insira a %d nota:\n",x+1,notas[x]);
        scanf("%f", &notas[x]);
    }

    for(y = 0; y < 4; y++){
        printf("A %d nota foi: %4.2f \n",y+1,notas[y]);
    }
    return 0;
}
