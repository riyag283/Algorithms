#include<stdio.h>

//function to sort in descending order
void sort(int arr[],int n){
	int i,j,key;
	for(j=1;j<n;j++){
		key=arr[j];
		i=j-1;
		while(i>=0&&arr[i]<key){
			arr[i+1]=arr[i];
			i--;
		}
		arr[i+1]=key;
	}
}
//function to display
void display(int arr[],int n){
	for(int i=0;i<n;i++)
		printf("A[%d]: %d\t",(i),arr[i]);
	printf("\n");
}

int main(){
	printf("\nEnter the number of elements:");
	int n;
	scanf("%d",&n);
	printf("\nEnter the elements:");
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	display(arr,n);
	sort(arr,n);
	display(arr,n);
	return 0;
}
