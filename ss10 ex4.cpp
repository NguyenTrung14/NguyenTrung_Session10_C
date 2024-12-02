#include<stdio.h>

int main(){
	int numbers[10]={2,1,5,4,9,10,7,3,6,8};
	int arrSize=sizeof(numbers)/sizeof(int);
	for(int i=0;i<arrSize;i++){
		printf("%d\t",numbers[i]);
	}
	for(int i=1;i<arrSize;i++){
		int key=numbers[i];
		int j=i-1;
		while(j>=0 && numbers[j]>key){
			numbers[j+1]=numbers[j];
			j--;
		}
		numbers[j+1]=key;
	}
	printf("\n \n");
	for(int i=0;i<arrSize;i++){
		printf("%d\t",numbers[i]);
	}
	return 0;
}
