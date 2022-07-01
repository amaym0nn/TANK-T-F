#include <stdio.h>
#include <string.h>
#include "select.h"
#include "france.h"
#include "soviet.h"
#include "germany.h"

int main() {


printf("\n\nWelcome to the TANK-T-F game that I developed with the C language. The aim of this game is to try to answer the type of tank you choose. True or False answers are output according to the answer you entered.\n");

printf("\n\nThere are 4 possible answers. Answer the questions as shown below:\n\n1-light\n2-medium\n3-heavy\n4-td (Meaning, Tank Destroyer)\n\n");
    
    

    
    printf("<---------------------->\n\n");

    printf("      1-FRANCE\n");
    printf("      2-Soviet\n");
    printf("      3-Germany\n\n");

    printf("<---------------------->\n\n");

    int crselect;
        printf("Select a Country: ");
        scanf("%d", &crselect);

        switch(crselect) {

            case 1:
                franceTanks();
                    input();
                    cFrance(&iuser);

            break;

            case 2:
                sovietTanks();
                    input();
                    cSoviet(&iuser);

            break;

            case 3:
                germanyTanks();
                    input();
                    cGermany(&iuser);

            break;
        }
    

}