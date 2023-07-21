// check if character is digit

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char c;
    system("cls"); //clrscr vs code
    printf("\nEnter anything\t");
    scanf("%c",&c);
    printf("\n%d",isdigit(c));

    return 0;
}