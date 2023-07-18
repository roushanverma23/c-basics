//Armstrong number of 3 digit

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,a,b,c,z;
    system("cls");

    printf("\n Enter n\t");
    scanf("%d",&n);

    a = n/100;
    b = n/10 - a*10;
    c = n%10;
    z = (a*a*a) + (b*b*b) + (c*c*c);

    if(n == z)
        printf("\n%d is Armstrong number",n);

    return 0;

}