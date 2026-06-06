#include <stdio.h>
void printtable(int n);
int main(){
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    printtable(n);
    return 0;
}
void printtable(int n){
    for (int i=1; i<=10; i++){
        int table=n*i;
        printf("%d x %d=%d\n", n, i, table);
    }
}