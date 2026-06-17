#include <stdio.h>
int main (){

    int i = 5;
    int *ptr = &i;
    int **pptr = &(*ptr);

    printf("The address of i : %u\n", *ptr);
    printf("The valu of i : %d\n", *ptr);

    printf("The address of *ptr = %p\n", **pptr);

    return 0;
}