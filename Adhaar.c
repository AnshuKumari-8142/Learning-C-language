#include <Stdio.h>
int main(){
    int adhaar[5];

    int *ptr = &adhaar[0];
    for(int i = 0; i < 5; i++){
        printf("Enter Adhaar Number: ");
        scanf("%d", ptr + i);
    }

    for(int i = 0; i < 5; i++){
        printf("Adhaar Number = %d\n", *(ptr + i));
    }
    return 0;
}