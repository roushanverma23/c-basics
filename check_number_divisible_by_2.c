// check the number divisible by 2

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    system("cls");
    printf("\nEnter the number\t");
    scanf("%d",&n);
    if(n % 2 == 0)
        printf("\n%d Divisible by 2",n);
    else
        printf("\n%d Not Divisible by 2",n);
    return 0;
}