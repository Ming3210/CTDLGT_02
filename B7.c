#include <stdio.h>
#include <stdlib.h>

void findPair(int *arr, int n, int k) {
    int flag = 0; 
    printf("Cac cap so co tong bang %d la:\n", k);
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == k) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                flag = 1;
            }
        }
    }
    
    if (!flag) {
        printf("Khong tim thay cap so nao co tong bang %d.\n", k);
    }
}

int main() {
    int n, k;
    
 
    printf("Nhap n: ");
    scanf("%d", &n);
 

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri k: ");
    scanf("%d", &k);

    findPair(arr, n, k);

    
    return 0;
}
