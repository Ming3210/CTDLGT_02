#include <stdio.h>
#include <stdlib.h> 

void increment(int *arr, int n) {
   for(int i = 0;i< n;i++){
		for (int j = i+1;j < n ;j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i]=arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int *arr = NULL;
	arr = (int *)malloc(n * sizeof(int));
   

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    increment(arr, n);

    printf("Cac phan tu trong mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

   

    return 0;
}
