#include <stdio.h>

int main(){
	// khai bao mot bien va con tro cua bien do
	int number =9;
	int *ptr = &number;
	// dung 2 cach de in ra gia tri va dia chi cua bien duoc khai bao 
	// cach 1 
	printf("Gia tri cua bien number la %d\n", number);
	printf("Dia chi cua bien number la %llu\n",(unsigned long long)&number);
	//cach 2 su dung con tro
	printf("gia tri cua bien number la %d\n ",*ptr);
	printf("Dia chi cua bien number la %llu\n",(unsigned long long)ptr);
	return 0;
}

