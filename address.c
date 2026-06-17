#include <stdio.h>
#include <string.h>//Library Function

typedef struct addressOf5People{
    int houseNo;
    int block;
    char city[100];
    char state[100];
}add;

int main(){
    struct addressOf5People add[5];
    printf("Enter info for 1st Person: ");
    scanf("%d %d %s %s", &add[0].houseNo, &add[0].block, &add[0].city, &add[0].state);

    printf("Enter info for 2nd Person: ");
    scanf("%d %d %s %s", &add[1].houseNo, &add[1].block, &add[1].city, &add[1].state);

    printf("Enter info for 3rd Person: ");
    scanf("%d %d %s %s", &add[2].houseNo, &add[2].block, &add[2].city, &add[2].state);

    printf("Enter info for 4th Person: ");
    scanf("%d %d %s %s", &add[3].houseNo, &add[3].block, &add[3].city, &add[3].state);

    printf("Enter info for 5th Person: ");
    scanf("%d %d %s %s", &add[4].houseNo, &add[4].block, &add[4].city, &add[4].state);

    printf("\n");

    //first person
    printf("HouseNo. of 1st person: %d\n", add[0].houseNo);
    printf("Block of 1st person: %d\n", add[0].block);
    printf("City of 1st person: %s\n", add[0].city);
    printf("State of 1st person: %s\n", add[0].state);

    printf("\n");

    //second person
    printf("HouseNo. of 2nd person: %d\n", add[1].houseNo);
    printf("Block of 2nd person: %d\n", add[1].block);
    printf("City of 2nd person: %s\n", add[1].city);
    printf("State of 2nd person: %s\n", add[1].state);

    printf("\n");

    //third person
    printf("HouseNo. of 3rd person: %d\n", add[2].houseNo);
    printf("Block of 3rd person: %d\n", add[2].block);
    printf("City of 3rd person: %s\n", add[2].city);
    printf("State of 3rd person: %s\n", add[2].state);

    printf("\n");

    //fourth person
    printf("HouseNo. of 4th person: %d\n", add[3].houseNo);
    printf("Block of 4th person: %d\n", add[3].block);
    printf("City of 4th person: %s\n", add[3].city);
    printf("State of 4th person: %s\n", add[3].state);

    printf("\n");

    //fifth person
    printf("HouseNo. of 5th person: %d\n", add[4].houseNo);
    printf("Block of 5th person: %d\n", add[4].block);
    printf("City of 5th person: %s\n", add[4].city);
    printf("State of 5th person: %s\n", add[4].state);

    return 0;
}