#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int max = 0;

	int *arr = NULL;
	arr = (int*) malloc(n * sizeof(int));
	printf("Nhap n :");
	scanf("%d",&n);
	for(int i =0;i< n;i++){
		printf("Nhap phan tu %d :", i+1);
		scanf("%d",&arr[i]);
	}
	max = arr[0];
  	printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i = 0;i < n ;i++){
    	if(max < arr[i]){
    		max = arr[i];
		}
	}
	printf("Phan tu lon nhat la %d", max);
}