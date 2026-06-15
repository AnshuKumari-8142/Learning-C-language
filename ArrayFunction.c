#include <stdio.h>
void change(int *a);
void print(int *arr, int size);
int main(){
    int b = 10; // here this is argument b
    printf("%d\n", b);
    change(&b); // calling function by actual parameter or argument
    printf("%d\n", b); // here b is change into (a) parameter of the function 

    int arr[] = {1,2,3,4,5,6,7,8,9};
    print(arr, 9);
    return 0;
}
void change (int *a){ // here passing parameter a
    *a = 100; // this is parameter
}
void print(int *arr, int size){
    for(int i = 0; i<9; i++){
        printf("element of %dth index of an arr is %d\n",i, *(arr + i));
    }
}