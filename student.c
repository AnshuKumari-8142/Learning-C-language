#include <stdio.h>
#include <string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1;
       // s1.name = "Anshu";
    strcpy(s1.name, "Anshu");
    s1.roll = 20;
    s1.cgpa = 8.7;
    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);
    printf("\n");

    struct student s2;
    //s2.name = "Ragani"
    strcpy(s2.name, "Ragani");
    s2.roll = 21;
    s2.cgpa = 8.9;
    printf(" student name = %s\n", s2.name);
    printf("student roll = %d\n", s2.roll);
    printf("student cgpa = %f\n", s2.cgpa);
    printf("\n");

    struct student s3;
    strcpy(s3.name, "Rima");
    s3.roll = 21;
    s3.cgpa = 8.0;
    printf("Student name = %s\n", s3.name);
    printf("student roll = %d\n", s3.roll);
    printf("student cgpa = %f\n", s3.cgpa);
    printf("\n");

    
    return 0;
}