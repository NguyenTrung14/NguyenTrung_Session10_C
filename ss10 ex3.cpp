#include<stdio.h>

int main(){
	int numbers[10]={2,1,5,4,9,10,7,3,6,8};
	int arrSize=sizeof(numbers)/sizeof(int);
	for(int i=0;i<arrSize;i++){
		printf("%d\t",numbers[i]);
	}
	for(int i=0;i<arrSize;i++){
		int min=numbers[i];
		for(int j=i+1;j<arrSize;j++){
			if(min>numbers[j]){
				min = numbers[j];
				numbers[j]=numbers[i];
				numbers[i]=min;
			}
		}
	}
	printf("\n \n");
	for(int i=0;i<arrSize;i++){
		printf("%d\t",numbers[i]);
	}
	return 0;
}
