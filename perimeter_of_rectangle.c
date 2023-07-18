//calculate perimeter of rectangle
#include <stdio.h>
int main(){
    int l,b,p;
    printf("\n Enter length\t");
    scanf("%d",&l);
    printf("\n Enter breadth\t");
    scanf("%d",&b);

    p = (2*(l+b));

    printf("\n Perimeter = %d",p);

    return 0;
}