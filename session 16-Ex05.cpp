#include <stdio.h>

// khai bao ham cap nhat phan tu
void capNhatPhanTu(int *arr, int viTri, int giaTriMoi) {
    arr[viTri] = giaTriMoi; 
}
// khai bao ham in mang
void inMang(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int mang[] = {1, 2, 3, 4, 5}; 
    int size = 5; 
    printf("Mang ban dau la: ");
    inMang(mang, size);
    capNhatPhanTu(mang, 2, 99);
    printf("Mang sau khi cap nhat la: ");
    inMang(mang, size);
    return 0;
}

