

#include<stdio.h>
int main(){
	int n;
	printf("ENTER YOUR NUMBER OF ELEMENT : ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i = 0; i<n; i++)
	{
		printf("ENTER YOUR ELEMENT : ",i+1);
		scanf("%d",&arr[i]);
	}
	int mim = arr[0];
	for(int i = 1; i<n; i++){
		if(arr[i]<mim){
		    mim = arr[i];
		}
	}
	printf("MIMUM NUMBER OF ELEMENT IS %d",mim);
	
}