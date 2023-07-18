// print cube of a number

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    
    system("cls"); // clear screen vs code
    printf("\n Enter a number to print cube\t");
    scanf("%d",&n);
    printf("\n Cube = %d",n*n*n);

    return 0;
}