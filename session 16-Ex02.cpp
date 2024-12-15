#include <stdio.h>

// ham hoan doi gia tri 2 bien 
void swap(int *a, int *b) {
    int temp = *a; 
    *a = *b;      
    *b = temp;     
}
int main() {
    // khai bao gia tri cho 2 bien 
    int number1 = 5;
    int number2 = 10;
    printf("Truoc khi hoan doi: number1 = %d, number2 = %d\n", number1, number2);
    swap(&number1,&number2);
    printf("Sau khi hoan doi: number1 = %d, number2 = %d\n", number1,number2);
    return 0;
}


