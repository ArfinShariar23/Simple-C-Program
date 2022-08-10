#include<stdio.h>
int main()
{
    //Write a C program to print natural number 1-100
    int n;
    printf("The Natural Number List is\n");
    for(n=1;n<=100;n++){
        printf("%d\n",n);
    }
    printf("\n");

    //Write a C program to print even number 1-100
    int i;
    printf("The Even Number list is\n");
    for(i=2;i<=100;i=i+2){
        printf("%d\n",i);
    }
    printf("\n");
    //Write a C program to print odd number 1-100
    int j;
    printf("The Odd Number list is\n");
    for(j=1;j<=100;j=j+2){
        printf("%d\n",j);
    }

  return 0;
}
