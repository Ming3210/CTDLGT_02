#include <stdio.h>
#include <stdlib.h>
void deleteIndex(int **arr,int *n,int k){

    int pos = -1;
    for(int i = 0; i < *n; i++) {
        if((*arr)[i] == k) {
            pos = i;
            break;
        }
    }
     if(pos != -1) {
        for (int i = pos; i < *n - 1; i++) {
            (*arr)[i] = (*arr)[i + 1];
        }
        *arr = (int*) realloc(*arr, (*n-1)*sizeof(int));
		 (*n)--;
       printf("Mang sau khi xoa phan tu %d la: ", k);
        for (int i = 0; i < *n; i++) {
            printf("%d ", (*arr)[i]);
        }
    } else {
        printf("Khong tim thay phan tu %d trong mang\n", k);
    }
}

int main(){
 	int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int *arr = NULL;
	arr = (int *)malloc(n * sizeof(int));
   

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
	int k;
	printf("Nhap so can xoa");
	scanf("%d",&k);
	deleteIndex(&arr, &n, k);

    printf("\n");
   
}
