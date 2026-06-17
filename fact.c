#include <stdio.h>
int fact(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1*n;
    return factN;
}
int main(){
    int a;
    printf("Enter a Number = ");
    scanf("%d", &a);
    printf("Factorial of n Number is = %d\n", fact(a));
    return 0;
}
