#include <stdio.h>

// khai bao ham in tat ca cac phan tu cua mang
void inMang(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu %d: %d\n", i, *(arr + i)); 
    }
}
int main() {
    // Khai bao va gan gia tri cho mang
    int mang[] = {1, 2, 3, 4, 5};
    int size = sizeof(mang) / sizeof(mang[0]); 
    printf("Cac phan tu trong mang la:\n");
    inMang(mang, size);
    return 0;
}

