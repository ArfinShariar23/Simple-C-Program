#include<stdio.h>

//Write a C program to Swap to number using Function.
//Input: a = 10, b = 20
//Output: a = 20, b = 10

int swap(int a, int b){
    int temp = 0;
    temp = a;
    a = b ;
    b = temp;
    printf("After Swapping Two Numbers a = %d and b = %d",a,b);
}

int main(){
    int num1 = 10, num2 = 20;
    printf("Before Swapping Two numbers a = %d and b = %d\n",num1,num2);
    int result = swap(num1,num2);
}
