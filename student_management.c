#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function Prototypes
void add_student();
void display_student();
void search_student();
void update_student();
void delete_student();

// Student structure
typedef struct student{
    int roll;
    char name[100];
    char department[100];
    float cgpa;
}stu;

int main(){
    int choice;
    printf("====================================================\n");
    printf("            STUDENT MANAGEMENT SYSTEM               \n");
    printf("====================================================\n");
    printf("1. Add New Student\n");
    printf("2. Display Recorded Students\n");
    printf("3. Search Student by Roll no.\n");
    printf("4. Update Student Record\n");
    printf("5. Delete a Student\n");

    printf("--------------------------------------------\n");

    printf("Enter Your Choice:");
    scanf("%d", &choice);

    switch (choice){        // Input User Choice
        case 1:
        add_student(); break;
        case 2:
        display_student(); break;
        case 3:
        search_student(); break;
        case 4:
        update_student(); break;
        case 5:
        delete_student(); break;
        
        default:
        printf("Invalid Choice! Try Again\n");
    }
    
    return 0;
}

// function definition 
// Adding a new student to file
void add_student(){
    FILE *student;
    student = fopen("student.txt", "a");
    stu s1;

    printf("-----------Adding New Student-----------\n");

    fflush(stdin);

    printf("Enter roll_No: ");
    scanf("%d", &s1.roll);

    printf("Enter Name (without space): ");
    scanf("%s", &s1.name);

    printf("Enter Department: ");
    scanf("%s", &s1.department);

    printf("Enter cgpa: ");
    scanf("%f", &s1.cgpa);

    printf("Student Added Successfully!!");

    fprintf(student, "\n");

    fflush(stdin);
    
    fprintf(student, "%d\t", s1.roll);
    fprintf(student, "%s\t", s1.name);
    fprintf(student, "%s\t", s1.department);
    fprintf(student, "%f\t", s1.cgpa);

    fclose(student);
}

// Display all records from the file
void display_student(){
    FILE *student;
    student = fopen("student.txt", "r");

    stu s1;
    int found = 0;
    //char ch = fgetc(student);
    printf("-----------Recorded Students Data-----------\n");
    printf("===================================================\n");
    printf("Roll\t Name\t Department\t CGPA\n");
    printf("===================================================\n");
    
    while(fscanf(student, "%d %s %s %f", &s1.roll, &s1.name, &s1.department, &s1.cgpa) != EOF){
        printf("%d\t %s\t %s\t %f\n", s1.roll, s1.name, s1.department, s1.cgpa);
    }

    // while(ch != EOF){
    //     printf("%c", ch);
    //     ch = fgetc(student);
    // }
    
    fclose(student);
}

// Search for a specific student record by Roll No.
void search_student(){
    FILE *student;
    student = fopen("student.txt", "r");

    if(student == NULL){
        printf("ERROR! File does not exists.\n");
        return;
    }
    stu s1;

    fflush(stdin);

    int Searchroll;
    int found = 0;
    fflush(stdin);
    printf("Searching Student By Roll No.\n");
    printf("--------------------------------------------\n");

    printf("Enter RollNo. :");
    scanf("%d", &Searchroll);

    while(fscanf(student, "%d %s %s %f", &s1.roll, s1.name, s1.department, &s1.cgpa) !=EOF){
        if(Searchroll == s1.roll){
            found = 1;
            printf("----------Student Found----------\n");
            printf("Student Roll No. : %d\n", s1.roll);
            printf("Student Name:  %s\n", s1.name);
            printf("Student Departement: %s\n", s1.department);
            printf("Student CGPA : %f\n", s1.cgpa);
            
            break;
        }
    }
    if (found == 0){
        printf("Record not found!\n");
    }

    fclose(student);
}

// upadting a specific students data: Modify details of an existing record
// update data by student roll no.
void update_student(){
    FILE *student = fopen("student.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

   
    if (student == NULL || temp == NULL) {
        printf("[Error] File access failed!\n");
        if (student != NULL) fclose(student);
        return;
    }

    int targetRoll, found = 0;
    stu s1; 

    printf("--------------------------------------------\n");

    fflush(stdin); // Clear input stream buffer 
    printf("Enter Roll Number to update: \n");
    scanf("%d", &targetRoll);

    while (fscanf(student, "%d %s %s %f", &s1.roll, s1.name, s1.department, &s1.cgpa) != EOF) {
      
        if (s1.roll == targetRoll) {
            found = 1;
            fflush(stdin); // Clear structural stream before collecting string types

            printf("Enter New Name (without space): ");
            scanf("%s", s1.name);

            printf("Enter New Department: ");
            scanf("%s", s1.department);

            printf("Enter New CGPA: ");
            scanf("%f", &s1.cgpa);
        }
        
        fprintf(temp, "%d %s %s %f\n", s1.roll, s1.name, s1.department, s1.cgpa);
    }

    fclose(student);
    fclose(temp);

    if (found == 1) {
        remove("student.txt");         
        rename("temp.txt", "student.txt"); 
        printf("Record updated successfully!!\n");
    } else {
        remove("temp.txt"); 
        printf("Record Not Found!\n");
    }
}

// Remove a record using a temporary file transfer
void delete_student(){
    FILE *student = fopen("student.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (student == NULL || temp == NULL) {
        printf("File access failed!\n");
        if (student != NULL) fclose(student);
        return;
    }
    fflush(stdin);

    stu s1;
    int roll, found = 0;
    printf("--------------------------------------------\n");

    fflush(stdin);
    printf("Enter Roll No. : ");
    scanf("%d", &roll);
    while(fscanf(student, "%d %s %s %f", &s1.roll, &s1.name, &s1.department, &s1.cgpa) != EOF){

        if (roll == s1.roll){
            found = 1;
        }else{
            fprintf(temp, "%d  %s %s  %f\n", s1.roll, s1.name, s1.department, s1.cgpa);
        }
    }
   fclose(student);
   fclose(temp);

   if(found == 1){
    remove("student.txt");
    rename("temp.txt", "student.txt");
    printf("Deleted Successfully!");
   }else{
    remove("temp.txt");
    printf("Record Not Found!");
   }

}
