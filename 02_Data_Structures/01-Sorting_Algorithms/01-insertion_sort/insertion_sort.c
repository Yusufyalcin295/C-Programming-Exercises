#include<stdio.h>
#include<math.h>
void insertionSort(int arr[], int n) {
	int i, j, key;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;

		}
		arr[j + 1] = key;
	}
	

}
void Print(int arr[], int n) {
		
	int i;

		for (i = 0; i < n; i++) {

			printf("%d ", arr[i]);

			

		}

		printf("\n");
 }

int main(){
	
	int arr[] = {68,8,88,888,65,635,63257,52,523,3693,};

	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Unsorted Array:\n");
	Print(arr, n);
	insertionSort(arr, n);
	printf("Sorted Array:\n");
	Print(arr, n);

	return 0;
}
