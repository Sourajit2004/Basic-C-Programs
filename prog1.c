#include<stdio.h>
void power(int x,int n){
	int product=1;
	for(int i=1;i<=n;i++){
		product*=x;
	}
	printf("x^n=%d",product);
}
void swap(int a,int b){
	int temp=0;
	temp=a;
	a=b;
	b=temp;
	printf("The  first and second integer after swapping are %d and %d\n",a,b);
}
void GCD(int m,int n){
	int min=(m<n)?m:n;
	for(int i=min;i>=1;i--){
		if((m%i==0)&&(n%i==0)){
			printf("GCD=%d",i);
			break;
		}	
	}
}
void sumelements(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	printf("The sum of elements of the array is %d",sum);
}
void removeblankspaces(char str[100]){
	int count1=0,count2=0;char strnew[100];
	while(str[count1]!='\0'){
		if(str[count1]!=' '){
			strnew[count2]=str[count1];
			count2++;
		}
		count1++;
	}
    for(int i=0;i<count2;i++){
        printf("%c",strnew[i]);
    }
}
int main(void){
	printf("Enter the integer 1-5 to carry out any of the following tasks\n");
	printf("1.Computer X^n,where X is any valid number and n is an integer value\n2.Swap values of two integer variables\n3.Compute the GCD of the two integers\n4.Compute and return the sum of n elements of an array\n5.Remove white spaces from a string\n");
	int k=0;
	printf("Enter your choice\n");
	scanf("%d",&k);
	int X,n,a,b,c,d,e; char str[100];
	if(k==1){
			printf("Enter the value of X and n");
			scanf("%d %d",&X,&n);
			power(X,n);
	}
	else if(k==2){
			printf("Enter the first and second integer respectively\n");
			scanf("%d %d",&a,&b);
			swap(a,b);
	}
	else if(k==3){ 
			printf("Enter the two integers\n");
			scanf("%d %d",&c,&d);
			GCD(c,d);
	}
	else if(k==4){
			printf("Enter the number of elements array will store\n");
			scanf("%d",&e);
            int arr[e];
            printf("Enter the elements of the array\n");
			for(int i=0;i<e;i++){
				scanf("%d",&arr[i]);
			}
			sumelements(arr,e);
	}
	else if(k==5){
			printf("Enter the string\n");
			scanf(" %[^\n]s",str);
			removeblankspaces(str);
	}
	else{
			printf("Invalid choice\n");
	}
	return 0;
}
