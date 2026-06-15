#include <stdio.h>
int main(){
  char ch = 'A';
  char *ptr = &ch;
  while(*ptr<='Z'){
    printf("%c\t", *ptr);
    ch++;
  }   
   return 0;
}