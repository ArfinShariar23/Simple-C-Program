#include<stdio.h>

//Write a C program to check user input is either Even or Odd.
//Input: 5
//Output: This is a Odd Number

int EvenOdd(int num1){
    if(num1%2==0){
        printf("This is a Even Number");
    }
    else{
        printf("This is a odd Number");
    }
}

int main(){
    int a;
    printf("Enter Any Number: ");
    scanf("%d",&a);
    printf(EvenOdd(a));
}
