#include <stdio.h>

int Array(int arr[]){
	for(int i=0;i<5;i++){
		printf("arr[%d] : %d\n",i,arr[i]);
	}
	return 0;
}
int main(){
	int arr[5]={1,2,3,4,5};
	Array(arr);
	return 0;
}
