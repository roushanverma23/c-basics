// wap that accept a message from user and print the same on screen
#include <stdio.h>
int main(){
    char str[100];
    printf("\nEnter your message\t");
    scanf("%[^\n]s",&str);
    printf("%s",str);
    return 0;    
}