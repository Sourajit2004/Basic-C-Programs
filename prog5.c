#include<stdio.h>
int reverse(int n){
	int rev=0,d=0;
	while(n!=0){
		d=n%10;
		rev=rev*10+d;
		n/=10;
	}
	return rev;
}
int main(void){
	int num=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	printf("The reversed number is %d",reverse(num));
	return 0;
}
	