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

    printf("Antes do realloc:\n");
    printf("%d %d %d\n", p[0], p[1], p[2]);

    int *temp= realloc(p, 6 * sizeof(int));

    if(temp == NULL){
        printf("Erro de Realocacao");
        free(p);
        return 1;
    }

    p=temp;

    p[3]= 40;
    p[4]= 50;
    p[5]= 60;

    printf("Depois do realloc:\n");
    printf("%d %d %d %d %d %d\n", p[0], p[1], p[2], p[3], p[4], p[5]);

    free(p);
    p= NULL;

    return 0;
}