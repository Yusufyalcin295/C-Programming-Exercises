#include <stdio.h>
#include <stdlib.h>

void swap(int* xp, int* yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;

}
void selectionSort(int arr[], int n) {
	
	int i, j;
	for (i = 0; i < n - 1; i++) {
		int min_idx = i;
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx]) {
				min_idx = j;

			}
		}

		swap(&arr[i], &arr[min_idx]);
	}
}


void Print(int arr[], int n) {

	int i;

	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);

	}

	printf("\n");

}


int main() {

	int arr[] = { 25,63,5,12,36,7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Unsorted Array:");
	Print(arr, n);
	printf("Sorted Array:");
	selectionSort(arr, n);
	Print(arr, n);

	
	
	return 0;
}