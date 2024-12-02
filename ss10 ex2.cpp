#include<stdio.h>
int main(){
	int arr[10]={9,5,6,8,10,3,2,1,4,7};
	int number;
	for(int i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	for(int i=0;i<(sizeof(arr)/sizeof(int))-1;i++){
		for(int j=0;j<(sizeof(arr)/sizeof(int))-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
