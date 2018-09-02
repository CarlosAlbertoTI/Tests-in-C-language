#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("10:00");

    for(int x = 9; x >= 0 ; x--){
        for(int y = 59; y >= 0; y--){
             printf("%d:%d\n",x,y);
        }
    }


    return 0;
}
