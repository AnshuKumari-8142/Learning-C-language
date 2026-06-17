#include <stdio.h>
int main(){
    int *ptr;
    int n;

    ptr = &n; // here ptr stores the address of n 
    *ptr = 0;

    printf(" n = %d\n", n);
    printf("*ptr = %d\n", *ptr); //*ptr stores the value of the address that stores in this pointer (ptr stores the address of n and *ptr stores the value of ptr means n.)

    *ptr += 5;
    printf("Now n is: %d\n", n);
    printf("Now *ptr is: %d\n", *ptr);

    (*ptr)++;
    printf("Now n is: %d\n", n);
    printf("Now *ptr is : %d\n", *ptr);
    return 0;
}