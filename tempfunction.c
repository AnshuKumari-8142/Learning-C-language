#include <stdio.h>
void temp(float n);
void celcius(float a);
int main(){
    float n;
    printf("Enter temperature in celcius:");
    scanf("%f", &n);
    float a;
    printf("Enter temperature in f:");
    scanf("%f", &a);
    temp(n);
    celcius(a);
    return 0;
}
void temp(float n){
    n=(n*9/5)+32;
    printf("Temperature in F:%f", n);
}
void celcius(float a){
    a=(a*0.18)+32;
    printf("The temperatur in celcius is:%f\n", a);
}