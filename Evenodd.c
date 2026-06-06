#include <stdio.h>
int main(){
    int a;
    printf("Enter a");
    scanf("%d",&a);

    if(a%2==0){
        if(a>=0){
            printf("Positive\n");
         }
         else{
            printf("Negative\n");
         }
        printf("even\n");
    }
    else{
      if(a<=0){
        printf("negative\n");
      }
      else{
        printf("Positive\n");
    }
      printf("odd\n");
    }
    return 0;

}