#include <stdio.h>
int main(){
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    for(int i=2; i<=n/2; i++){
        if(n%i!=0){
            printf ("prime\n");
            break;
        }else{
            printf("Non prime\n");
            break;
        }
    }
    return 0;
}