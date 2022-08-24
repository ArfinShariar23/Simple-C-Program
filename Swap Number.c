#include<stdio.h>
int main(){
    int num1;
    int num2;
    int temp;

    printf("Enter Value of Number 1: ");
    scanf("%d",&num1);

    printf("\nEnter Value of Number 2: ");
    scanf("%d",&num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter Swapping Number 1 = %d",num1);
    printf("\nAfter Swapping Number 2 = %d",num2);
    return 0;
}
