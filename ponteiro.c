#include <stdio.h>
#include <malloc.h>

int main () {
    int *y;
    y = (int *) malloc(sizeof(int)); // void * -> int *

    int i = 5;        //armazenamento valor na var
    int *j;    //definindo um valor do tipo ponteiro parara inteiro
    *j =&i;          //ponteiro j recebe o endereço (&) de i
    i = i + 1;        

    //printf("i: %i\n", &i);
    printf("i: %i\n", y);

    return 0;
}