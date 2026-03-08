#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p;

    p= (int*) malloc(3 * sizeof(int));

    if(p == NULL){
        printf("Numero invalido");
        return 1;
    }

    p[0]= 10;
    p[1]= 20;
    p[2]= 30;

    printf("%d\n", p[0]);
    printf("%d\n", p[1]);
    printf("%d\n", p[2]);

    free(p);
    p=NULL;

return 0;
}
