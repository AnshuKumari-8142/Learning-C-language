#include <stdio.h>
int sum(int n){
    if(n==0){
        return 0;
    }
    int sumNm1 = sum(n-1);
    int sumN = sum(n-1)+n;
    return sumN;
}

int main(){
    int a;
    printf("Enter a Number = ");
    scanf("%d", &a);
    printf("sum of n Numbers = %d\n", sum(a));
    return 0;
}