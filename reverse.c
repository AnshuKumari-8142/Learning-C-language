#include <stdio.h>
void reverse(int arr[], int n);
int main(){
    int arr[]= {1,2,3,4,5};

    reverse(arr, 5);
    return 0;

}

void reverse(int arr[], int n){
    for (int i = 0; i<=n/2; i++){
        int firstValue = arr[i];
        int secondValue = arr[n-i-1];
        //revrese
        arr[i] = secondValue;
        arr[n-i-1]= firstValue;

    }

}
