// Area of a circle

#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

int main(){
    int r;
    system("cls"); // clrscr
    printf("\nEnter radius of circle\t");
    scanf("%d",&r);
    printf("\n Area of circle = %f",pi*r*r);

    return 0;
}