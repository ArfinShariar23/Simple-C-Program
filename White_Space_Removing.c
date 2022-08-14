#include<stdio.h>
#include<string.h>
void main(){
    int len;
    char ch[100];
    int i,j;
    printf("Enter Any String Value: ");
    gets(ch);

    len = strlen(ch);
    printf("The Length of String = %d",len);

    for(i=0; i<len; i++){
        if(ch[i] == ' '){
            for(j=i; j<len; j++){
                ch[j] = ch[j+1];
            }
            len--;
        }
    }
    printf("\nAfter removing White Space from string now my string is = %s",ch);
    printf("\n");

    return 0;
}
