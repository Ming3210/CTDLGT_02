#include <stdio.h>
void reverse(int arr[],int n){
	int start = 0;
	int end = n - 1;
	while(start < end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
int main(){
	int n;

	
	printf("Nhap n :");
	scanf("%d",&n);
	int arr[n];
	for(int i =0;i< n;i++){
		printf("Nhap phan tu %d :", i+1);
		scanf("%d",&arr[i]);
	}
	reverse(arr,n);
	printf("Cac phan tu trong mang bi dao nguoc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
