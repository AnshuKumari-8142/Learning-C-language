#include <stdio.h>
int main(){
    int marks;
    printf("Enter marks:");
    scanf("%d", &marks);

    if (marks<=30){
        printf("grade D and fail");
    }
    else if(marks>30 && marks<=60){
        printf("grade C");
    }
    else if(marks>60 && marks<=80){
        printf("Grade B");
    }
    else if(marks>80 && marks<=90 ){
        printf("Grade A");
    }
    else{
        printf("Grade A+");
    }
    return 0;
}