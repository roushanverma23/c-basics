// print average of three number

#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b,c,avg;

    system("cls");
    printf("\nEnter 1st number\t");
    scanf("%d",&a);
    printf("\nEnter 2nd number\t");
    scanf("%d",&b);
    printf("\nEnter 3rd number\t");
    scanf("%d",&c);

    //avg = ((a+b+c)/3);

    printf("\nAverage = %d",(a+b+c)/3);

    return 0;

}
