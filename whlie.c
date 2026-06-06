#include <stdio.h>
int main(){
    int n, table=0;
    printf("Enter number");
    scanf("%d", &n);
    int i;
    while(i<=10){
        i++;
        table=n*i;
        printf("%d\n", table);
    }
    return 0;

}