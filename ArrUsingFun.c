#include <Stdio.h>
int printArr(int arr[], int n); //here n is the size of an array
int main(){
    int arr[] = {349,56,546,345,345,34,435};
    printArr(arr, 7);
    for(int i = 0; i<7; i++){
        printf("Element of %d index = %d\n", i, arr[i]);
    }
    return 0;
}
int printArr(int arr[], int n){
    for(int i = 0; i < 7; i++){
        return arr[i];
    }
}
