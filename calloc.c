#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p, i;

    p= (int*) calloc(5, sizeof(int));

    if(p == NULL){
        printf("Erro de Alocacao");
        return 1;
    }

        printf("Valores iniciais:\n");
    for(i=0; i<5; i++){
        printf("p[%d] = %d\n", i, p[i]);
    }

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;

    printf("Valores atribuidos:\n");
    for(i=0; i<5; i++){
        printf("p[%d] = %d\n", i, p[i]);
    }

free(p);
p = NULL;

return 0;
}