#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//define Types Variables
#define LIGHT "light"
#define MEDIUM "medium"
#define HEAVY "heavy"
#define TD "td"


void germany_checkinputType(char TANK[50], int x) {

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

void germanyTanks() {

    printf("<---------------------->\n\n");

    printf("      1-Maus\n");
    printf("      2-Grille-15\n");
    printf("      3-Ru-251\n\n");

    printf("<---------------------->\n\n");
}
struct grUser {

    int data1;
    char data2[50];
}; 



void cGermany(struct grUser *ptr) {

        switch(ptr->data1) {

            default:
                printf("Operation Error. Try Again...\n\n");

            break;

            case 1:
                germany_checkinputType(ptr->data2, 3);

            break;

            case 2:
                germany_checkinputType(ptr->data2, 4);

            break;

            case 3:
                germany_checkinputType(ptr->data2, 1);

            break;
        }
}