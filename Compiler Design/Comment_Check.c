/*#include<stdio.h>
#include<String.h>
void main(){

    char ch[100];
    printf("Enter Any text: "); //User Input
    gets(ch);

    int len = strlen(ch); //Count the length of String

    if(ch[0]='-' && ch[1]=='-'){
        printf("This is a Single Line Comment");
    }
    else if(ch[0] == '-' && ch[1] == '-' && ch[2] == '+' && ch[len]=='+'&& ch[len]=='-'&& ch[len]=='-'){
        printf("This is a Multiple Line Comment");
    }
    else{
        printf("There is no Comment");
    }



    return 0;
}*/

//Take an User Input and print this is a comment either this not a comment based on Logic.

#include<stdio.h>
#include<string.h>
void main(){
    printf("Enter Any Text: ");
    char text[10];
    gets(text);
    int len = strlen(text);

    if(text[0] == '/' && text[1]=='/'){
        printf("\nThis is a Single Line Comment");
    }
    else if(text[0] == '/' && text[1] =='*' && text[len-1] == '*' && text[len]=='/'){
        printf("\nThis is a Multiple Line Comment");
    }
    else{
        printf("This is not a Comment");
    }

    return 0;
}


