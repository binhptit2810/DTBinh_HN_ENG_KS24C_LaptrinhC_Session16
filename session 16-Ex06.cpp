#include <stdio.h>

// khai bao ham cap nhat phan tu
int timKiemPhanTu(int *arr, int size, int giaTri) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == giaTri) return i; 
    }
}
int main() {
    int mang[] = {1, 2, 4, 5, 6, 7};
    int viTri = timKiemPhanTu(mang, 6, 7); 
    printf("%d\n", viTri);
    return 0;
}

