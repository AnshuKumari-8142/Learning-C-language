#include <stdio.h>
#include <string.h>

typedef struct ComputerScienceEngineeringStudent{
    char name[100];
    int roll;
    float cgpa;
}CSEStu;
int main(){
    CSEStu s1;
    strcpy(s1.name, "Anshu");
    s1.roll = 20;
    s1.cgpa = 8.7;
    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);

    return 0;
}