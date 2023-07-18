// check smallest number
#include <stdio.h>>
#include <stdlib.h>

int main(){

    int a,b;
    system("cls");
    printf("\n Enter 1st number\t");
    scanf("%d",&a);
    printf("\n Enter 2nd number\t");
    scanf("%d",&b);

    if(a>b)
        printf("\n%d is greater",a);
    else
        printf("\n%d is greater",b);

    return 0;
}