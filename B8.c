#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
   
    printf("Nhap n (0 < n <= 1000): ");
    scanf("%d", &n);
    
    
    int *arr = (int *)malloc((n - 1) * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }
    
    printf("Nhap %d phan tu trong khoang tu 1 den %d:\n", n - 1, n);
    int sum = 0; 
    for (int i = 0; i < n - 1; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
    
    int expectedSum = n * (n + 1) / 2;
    
    int missingNumber = expectedSum - sum;
    
    printf("So bi thieu trong mang la: %d\n", missingNumber);
    
    
    return 0;
}
