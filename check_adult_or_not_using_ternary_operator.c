// check adult or not using ternary operator
#include <stdio.h>
#include <stdlib.h>

int main(){
    int age = 0;
    system("cls");
    printf("\nEnter age\t");
    scanf("%d",&age);
    age >= 18 ? printf("\nAdult") : printf("\nMinor");
    return 0;
}