#include <stdio.h>
#include <string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1 = {"asb", 1221234, 9.555};
    struct student *ptr = &s1;

    printf("Student name is %s\n", (*ptr).name);
    printf("Student name is %d\n", (*ptr).roll);
    printf("Student name is %f\n", ptr->cgpa);//Arrow Operator

    return 0;
}