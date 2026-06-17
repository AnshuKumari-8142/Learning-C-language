#include <stdio.h>

struct student{
    char name[20];
    int roll;
    float percentage;
};

int main(){
    struct student s1;
    
    printf("Enter name: ");
    scanf("%s", &s1.name);

    printf("Enter roll: ");
    scanf("%d", &s1.roll);

    printf("Enter percentage: ");
    scanf("%f", &s1.percentage);

    printf("\n");

    printf("student name is %s\n", s1.name);
    printf("student roll is %d\n", s1.roll);
    printf("student marksPercentage is %f\n", s1.percentage);

    printf("\n");
    //intilizing structures
    struct student s2 = {"Anshu", 1646, 9.333};
    printf("student roll = %d\n", s1.roll);

    return 0;
}