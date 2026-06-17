#include <stdio.h>
int main (){
    int marks[3];

    printf("Enter Physics marks: ");
    scanf("%d", &marks[0]);

    printf("Enter Chemistry marks: ");
    scanf("%d", &marks[1]);

    printf("Enter Maths marks: ");
    scanf("%d", &marks[2]);

    printf("Physics = %d, Chemistry = %d and Maths = %d\n", marks[0], marks[1], marks[2]);
    return 0;
}