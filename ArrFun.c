#include <stdio.h>
void printNumber(int arr[], int a); // here a is the size of an array
int main(){
    int array[] = {349,56,546,345,345,34,435}; //here is the argument of function which is also be changed
    printNumber(array, 7);
    return 0;
}
void printNumber(int arr[], int a){
    int *ptr = arr;
    for(int i = 0; i < a; i++){
        printf("array = %d\n", *(ptr + i));
    }
}