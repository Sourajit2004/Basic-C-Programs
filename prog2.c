#include<stdio.h>
int lengthstr(char str[100]){
	int length=0;
	while(str[length]!='\0'){
		length++;
	}
	return length;
}
void reverse(char str[100]){
	char strrev[lengthstr(str)];int length=lengthstr(str);int count=length-1;
	for(int i=0;i<length;i++){
		strrev[i]=str[count];
		count--;
	}
	printf("The reversed string is ");
	for(int i=0;i<length;i++){
		printf("%c",strrev[i]);
	}
}
int main(void){
	printf("Enter a string\n");
	char string[100];
	scanf("%[^\n]s",string);
	reverse(string);
	return 0;
}
	
	