#include <stdio.h>
#include <string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student ECE[10];
    strcpy(ECE[0].name, "Anshu");
    printf("Enter rollNo. = ");
    scanf("%d", ECE[0].roll);
    ECE[0].cgpa = 9.33;

    printf("Student name is %s\n", ECE[0].name);
    return 0;
}