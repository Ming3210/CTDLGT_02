#include <stdio.h>
int main(){
	int n;
	int count = 0;
	int num;
	printf("Nhap n :");
	scanf("%d",&n);
	int arr[n];
	for(int i =0;i< n;i++){
		printf("Nhap phan tu %d :", i+1);
		scanf("%d",&arr[i]);
	}
	printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap so :");
    scanf("%d",&num);
    for(int i = 0;i< n;i++){
    	if(arr[i] == num){
    		count++;
		}
	}
	printf("So lan xuat hien %d", count);
}