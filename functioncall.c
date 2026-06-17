#include <stdio.h>
void callbyvalue(int n);
void callbyrefrence(int *n);
int main(){
int n = 5;

callbyvalue(n);
printf("%d\n", n);

callbyrefrence(&n);
printf("%d\n", n);


}
void callbyvalue(int n){
    n = n*4;
    printf("%d\n", n);
}

void callbyrefrence(int *n){
    *n = (*n) * (*n);
    printf("%d\n", *n);
}