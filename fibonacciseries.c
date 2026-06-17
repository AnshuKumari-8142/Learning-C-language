#include <Stdio.h>
int fibonacci(int n){
    for(int i=0; i<=n; i++){
        int fibNm1 = fibonacci(n-1);
        int fibNm2 = fibonacci(n-2);
        int fibN = fibNm1 + fibNm2;
       return fibN;
    }
}
int main(){
    int a;
    printf("Enter n: ");
    scanf("%d", &a);
    printf("%d\t",fibonacci(a));
    return 0;
}