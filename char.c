#include <stdio.h>
int main(){
    char ch;
    printf("Enter character");
    scanf("%c", &ch);

    if(ch>=0 && ch<=9){
        printf("It is a digit\n.");
    }
    else{
        printf("it is not a digit.\n");
    }
    
    return 0;
}