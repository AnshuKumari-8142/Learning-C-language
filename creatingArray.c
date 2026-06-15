#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 1; i<=n; i++){
        arr[i - 1] = i;
        printf("%d",arr[i - 1]);
    }
    return 0;
}