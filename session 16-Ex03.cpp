#include <stdio.h>

// khai bao ham tinh tong
void tinhtong(int *a,int *b,int *sum){
	*sum = *a + *b ;
}
// khai bao va gan gia tri cho 2 bien so nguyen bat ki
int main(){
	int number1 =5;
	int number2 =20;
	int sum;
	tinhtong(&number1,&number2,&sum);
	printf("Ket qua tinh tong hai so la %d",sum);
	return 0;
}


