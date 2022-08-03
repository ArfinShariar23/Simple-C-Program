#include<stdio.h>
int main(){
	
	//Convert Lower Case latter into a Upper case latter
	
	char lower;
	printf("Enter Any Lower Case Latter: ");
	scanf("%c",&lower);
	
	printf("The Upper Case latter is: %c\n",lower-32);
	printf("Thank you");
	
	return 0;
}
