// check if person is adult or not

#include <stdio.h>
#include <stdlib.h>

int main(){
    int age = 0;
    system("cls");
    printf("\nEnter age\t");
    scanf("%d",&age);
    if (age >= 18)
        printf("\nAdult");
    else
        printf("\nMinor");
    
    return 0;
    
}