#include<stdio.h>
int main(){

    /* Write a C program which will take user input from user's age and check that is he eligible for vote or not. If he is 18 or greater then
    then program will give message that, 'you are eligible for vote. Either program will show a message that, 'Sorry You are not eligible for
    casting your vote.*/
    int age;
    printf("Please Enter your age =  ");
    scanf("%d",&age);

    if(age>=18){
            printf("Congratulations you are eligible for vote");
       }
    else
        {
            printf("Sorry You are not eligible for vote\n");
            printf("Try Again Later");



        }


return 0;
}
