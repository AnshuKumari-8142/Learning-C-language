#include<stdio.h>
void swap(int a, int b);
int main(){
    swap(2,3);
    return 0;
}
void swap(int a, int b){
    int c = a;
    a = b;
    b = c;
    printf("After swapping :\n");
    printf("a = %d\n && b = %d\t");
}