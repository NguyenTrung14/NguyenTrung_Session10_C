#include <stdio.h>

int main() {
    int n;
    printf("Nhap vao so luong phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];  
    int i;
    printf("Nhap cac phan tu trong mang : \n");
    for (i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Nhap so nguyen can tim: ");
    scanf("%d", &x);
    int found = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("\nVi tri cua so %d trong mang la: ", x);
            printf("%d ", i); 
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay phan tu %d trong mang.\n", x);
    }
    return 0;
}

