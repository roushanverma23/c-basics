//check grade on the basis of marks
#include <stdio.h>
#include <stdlib.h>
int main(){
    int marks = 0;
    system("cls");
    printf("\nEnter marks\t");
    scanf("%d",&marks);   
 
        if(marks >= 91){
            printf("\nA+");
        }
        else if (marks >= 81 && marks < 91)
        {
            printf("\nA");
        }
        else if (marks >= 71 && marks < 81)
        {
            printf("\nB+");
        }
        else if (marks >= 61 && marks < 71)
        {
            printf("\nB");
        }
        else if (marks >= 51 && marks < 61)
        {
            printf("\nC");
        }
        else if (marks < 51)
        {
            printf("\nD");
        }
        else{
            printf("\nNUMBER OUT OF RANGE");;
        }

    

    return 0;    
    
}