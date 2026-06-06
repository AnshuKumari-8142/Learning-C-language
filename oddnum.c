#include <stdio.h>
int main(){
    int n;
    do{
        printf("Enter number:");
        scanf("%d", &n);
        printf("%d\n", n);

        if(n%7==0){
            printf("%d", n);
            break;
        }
    }while(1);
    return 0;
}