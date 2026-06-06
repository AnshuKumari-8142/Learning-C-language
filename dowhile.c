#include <stdio.h>
int main(){ 
int n, table=0;
printf("Enter number:");
scanf("%d", &n);
int i=1;

do{
    table=n*i;
    printf("%d\n", table);
    i++;
}while(i<=10);
return 0;
}