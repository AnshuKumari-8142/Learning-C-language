#include <stdio.h>
void price(float value);
int main(){
    float value=100;
    price(value);
    return 0;
}
void price(float value){
    value = value + (value*0.18);
    printf("%f\n", value);
}