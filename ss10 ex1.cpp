#include<stdio.h>
int main(){
	int arr[10]={9,5,6,8,10,3,2,1,4,7};
	int number;
	printf("Moi ban nhap gia tri muon kiem tra : ");
	scanf("%d", &number);
	for(int i=0;i<10;i++){
		if(number==arr[i]){
			printf("Vi tri cua gia tri ban nhap trong mang la : %d",i+1);
		}
	}
	return 0;
}
