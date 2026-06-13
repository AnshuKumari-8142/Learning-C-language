#include <stdio.h>

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int add[3][3] = {{3,5,4}, {4,64,7}, {33,56, 6}};
    int sum[3][3];
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            sum[i][j] = arr[i][j] + add[i][j]; 
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}