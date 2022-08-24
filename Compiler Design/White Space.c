#include<stdio.h>
#include<String.h>
int main(){
    // Write a Program to recognize "/" in inside the program.
    char text[100];
    printf("Enter Any String: ");
    gets(text);

    int len = strlen(text);

    for(int i=0; i<=len; i++){
        if(text[i] == '/'){
            printf("\nFound");
            break;
        }
        printf("\nNot Found");
    }
    return 0;
}
