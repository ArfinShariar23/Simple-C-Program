#include <stdio.h>
#include<String.h>
int main(){
    //Exercise 1: Write a Program to recognize comment start with -- for single line comment and starting with --+ ending with +-- for multi line comment.
    char string[100];
    printf("Enter Any String: ");
    gets(string);

    int len = strlen(string);

    //Checking Single Line Comment
    if(string[0]=='-' && string[1]=='-' && string[2]!='+'){
        printf("This is a Single Line Comment");
    } //Run Successfully

    //Checking Multi Line Comment
    else if(string[0]=='-'&&string[1]=='-'&&string[2]=='+'&&string[len-1]=='-'&&string[len-2]=='-'&&string[len-3]=='+'){
        printf("This is a Multi line Comment");
    } //Run Successfully

    //Checking No Comment
    else{
        printf("There is no Comment Found"); //Run Successfully
    }



    return 0;
}


