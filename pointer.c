#include <stdio.h>
int main(){
    int age=32;
    int *ptr=&age;
    int _age= *ptr;
    printf("%p\n", &age);
    printf("%d\n", *ptr);

    return 0;
}