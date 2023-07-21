// check upper or lower case without using islower or isupper
#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch;
    system("cls");
    printf("\nENTER A CHARACTER\t");
    scanf("%c",&ch);
    
    if(ch >= 'A' && ch < 'Z'){
        printf("\nUPPER CASE");
    }
    else if (ch >= 'a' && ch < 'z')
    {
        printf("\nLOWER CASE");
    }

    else{
        printf("\nWRONG INPUT");
    }
    
    return 0;
}