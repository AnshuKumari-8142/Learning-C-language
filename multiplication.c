#include <stdio.h>
int main(){
    int arr[2][3] = {{2,3,4}, {5,6,7}};
    int array[3][3] = {{3,8,4}, {9,3,5}};
    int multiplication[2][3];
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            multiplication[i][j] = arr[i][j]*array[i][j];
            printf("%d\t", multiplication[i][j]);
        }
        printf("\n");
    }
    return 0;
}