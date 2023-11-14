#include<stdio.h>
int largest(int row,int column,int arr[row][column]){
	int max=0;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=column;j++){
			if(arr[i][j]>=max){
				max=arr[i][j];
			}
		}
	}
	return max;
}
int main(void){
	int row=0,column=0;
	printf("Enter the number of rows and columns respectively\n");
	scanf("%d %d",&row,&column);
	int arr[row][column];
	printf("Enter the elements of the 2-D array\n");
	for(int i=1;i<=row;i++){
		printf("Enter the elements of row %d", i);
		for(int j=1;j<=column;j++){
		scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	printf("The largest integer is %d",largest(row,column,arr));
	return 0;
}