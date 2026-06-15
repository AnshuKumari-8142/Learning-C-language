#include <stdio.h>
void swap(int a, int b);
int main(){
    int x = 3, y = 9;
    swap(x, y);
}

void swap(int a, int b){
    int c = a;
    a = b;
    b = a;
    printf("a = %d\t b = %d\t", a,b);
}