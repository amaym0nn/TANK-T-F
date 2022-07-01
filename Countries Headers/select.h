#include <stdio.h>
#include <string.h>


struct infoUser {

    int data1;
    char data2[50];
};     struct infoUser iuser;



void input() {

    int x;
    char y[25];

    printf("Select a Tank: ");
    scanf("%d", &x);

    printf("Enter the type of tank chosen: ");
    scanf("%s", &y);

    iuser.data1 = x;
    strcpy(iuser.data2, y);
}