#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter three number");
    scanf("%d %d %d", &a, &b, &c);

    if(a<=b && a<=c){
        printf("It is smallest%d.", a);
    }
        else if(b<=c&& b<=a){
            printf("It is smallest%d", b);
        }
    else{
        printf("c is smallest.\n");
    }
    return 0;
}