// check natural number

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("\nEnter a number\t");
    scanf("%d",&n);

    if(n > 0)
        printf("\n %d is natural number",n);
    
    return 0;
}