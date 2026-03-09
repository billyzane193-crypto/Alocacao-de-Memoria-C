#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p;

    p= (int*) malloc(3* sizeof(int));

    if(p == NULL){
        printf("Erro de Alocacao");
        return 1;
    }

    p[0]= 10;
    p[1]= 20;
    p[2]= 30;

    printf("Alocacao bem sucedida:\n");
    printf("%d %d %d\n", p[0], p[1], p[2]);

    free(p);
    p=NULL;
    return 0;
}