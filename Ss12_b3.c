#include <stdio.h>

int giaiThua(int number){
	for(int i=number-1;i>0;i--){
		number=number*i;
	}
	printf("giai thua cua so da nhap la %d",number);
	return 0;
}
int main(){
	int number;
	printf("nhap so bat ki : ");
	scanf("%d",&number);
	giaiThua(number);
	return 0;
}
