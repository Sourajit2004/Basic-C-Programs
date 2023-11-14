#include<stdio.h>
int length(char s[100]){
	int count=0;
	while(s[count]!='\0'){
		count++;
	}
	return count;
}
int subs(char str1[100],char str2[100]){
	int lengthstr2=length(str2),lengthstr1=length(str1),count=0;
	for(int i=0;i<lengthstr1;i++){
		count=0;
		for(int j=0;j<lengthstr2;j++){
			if(str2[j]==str1[count+i]){
				count++;
			}
			else{
				break;
			}
		}
		if(count==lengthstr2){
			return 1;
		}
	}
	return 0;
}
int main(void){
	printf("Enter the string 1 and string 2 respectively\n");
	char string1[100];char string2[100];
	scanf("%s",string1);
	scanf("%s",string2);
	if(subs(string1,string2)==1){
		printf("The string 2 is the substring of string 1\n");
	}
	else{
		printf("The string 2 is not the substring of string 1\n");
	}
	return 0;
}
		
		