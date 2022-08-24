#include<stdio.h>
void main(){
    char text[100];
    printf("Enter the Line: ");
    gets(text);

    int len = strlen(text);
    int i,j;

    for(i=0; i<len;i++){
        if(text[i] == '"'){
            for(j=i; j<len; j++){
                printf("%c",text[j]);
                if(text[j+1]=='"'){
                    printf("%c",text[j+1]);
                    break;
                }
            }
            break;
        }
    }

return 0;
}
