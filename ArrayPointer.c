#include <Stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int *ptr = arr;
    for(int i = 0; i < 9; i++){
        printf("%d\t", *(ptr + i));
    }
    printf("\n");
    for(int i = 0; i < 9; i++){
        // printf("Address of an arr[%d] = %p\n", i, &arr[i]);
        printf("Address of an arr[%d] = %u\n", i, &arr[i]);
    }
    return 0;
}