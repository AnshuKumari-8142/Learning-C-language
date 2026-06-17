#include <stdio.h>
int fibonacci(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    int fibNm1 = fibonacci(n-1);
    int fibNm2 = fibonacci(n-2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}

int main(){
    int a;
    printf("Enter a Number = ");
    scanf("%d", &a);
    printf("Fibonacci of n Number is = %d\n", fibonacci(a));
    return 0;
}