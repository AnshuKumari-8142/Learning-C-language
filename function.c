#include <stdio.h>

void namste();
void bonjour();

int main(){
char ch;
printf("write i for indian and f for french\n");
printf("Enter Citizen:");
scanf("%c", &ch);
if(ch=='i'){
    namste();
}else{
    bonjour();
}
getchar();
return 0;
}

void namste(){
    printf("namste\n");
}
void bonjour(){
    printf("bonjour\n");
}
