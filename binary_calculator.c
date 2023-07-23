//program to design binary calculator
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b;
    char choice,pro;
    system("cls");

    do
    {

    printf("\nEnter your choice of the following:-");
    printf("\n+");
    printf("\n-");
    printf("\n/");
    printf("\n*\n");
    scanf("%s",&choice);
    printf("\nEnter values\t");
    scanf("%d%d",&a,&b);

    switch (choice)
    {
    case '+': printf("\nSUM = %d",a+b);
        break;

    case '-': printf("\nSUB = %d",a-b);
        break;

    case '/': printf("\nDIV = %d",a/b);
        break;

    case '*': printf("\nPRODUCT = %d",a*b);
        break;
    
    default: printf("\nWRONG CHOICE");
        break;
    }

    printf("\nWANT TO CONTINUE PRESS y\t");
    scanf("%s",&pro);

    } while (pro == 'y');
    
    
    return 0;
}