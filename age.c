#include <stdio.h>
int main(){
    int age;
    printf("Enter age");
    scanf("%d", &age);
    if(age>13 && age<=18){
        printf("teenager\n");
    }
    else if(age>=18){
        printf("adult\n");
    }
    else{
        printf("not adult\n");
    }
    return 0;
}