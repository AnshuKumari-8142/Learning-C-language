#include <stdio.h>
int gcd(int a, int b, int c){
    if (b == 0 && c == 0){
        return a;
    }else{
        return gcd(c, b%c, c%a);
    }
}
int main(){
    printf("gcd = %d", gcd(12, 8, 5));
    return 0;
}