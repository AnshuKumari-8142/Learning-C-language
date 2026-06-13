#include <stdio.h>
int main(){
    int price[3];
    printf("Enter Price: ");
    scanf("%d %d %d", &price[0], &price[1], &price[2]);

    printf("Total price is : ", price[0]+(0.18*price[0]));
    printf("Total price is : ", price[1]+(0.18*price[1]));
    printf("Total price is : ", price[2]+(0.18*price[2]));
    
    return 0;
}