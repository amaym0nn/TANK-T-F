#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//define Types Variables
#define LIGHT "light"
#define MEDIUM "medium"
#define HEAVY "heavy"
#define TD "td"


void checkinputType(char TANK[50], int x) {

    switch(x) {

        case 1:
            int ldret = strcmp(TANK, LIGHT);
            (ldret == 0) ? printf("Your answer is correct!\n") : printf("Your answer is wrong!\n");

        break;

        case 2:
            int mdret = strcmp(TANK, MEDIUM);
            (mdret == 0) ? printf("Your answer is correct!\n") : printf("Your answer is wrong!\n");

        break;

        case 3:
            int hvret = strcmp(TANK, HEAVY);
            (hvret == 0) ? printf("Your answer is correct!\n") : printf("Your answer is wrong!\n");

        break;

        case 4:
            int tdret = strcmp(TANK, TD);
            (tdret == 0) ? printf("Your answer is correct!\n") : printf("Your answer is wrong!\n");

        break;
    }
}

void franceTanks() {

    printf("<---------------------->\n\n");

    printf("      1-Foch-155\n");
    printf("      2-AMX-50B\n");
    printf("      3-BC-25T\n\n");

    printf("<---------------------->\n\n");
}
struct User {

    int data1;
    char data2[50];
}; 



void cFrance(struct User *ptr) {

        switch(ptr->data1) {

            default:
                printf("Operation Error. Try Again...\n\n");

            break;

            case 1:
                checkinputType(ptr->data2, 4);

            break;

            case 2:
                checkinputType(ptr->data2, 3);

            break;

            case 3:
                checkinputType(ptr->data2, 1);

            break;
        }
}