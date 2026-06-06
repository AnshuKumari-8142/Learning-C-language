#include <stdio.h>
int percentage(int a, int b, int c);
int main(){
    int a,b,c;
    printf("Enter marks:");
    scanf("%d, %d, %d", &a, &b, &c);
    printf("percentage is:%d", percentage(a, b, c));
    return 0;
}
int percentage(int a, int  b, int c){
    return (a+b+c)/3;
    
}