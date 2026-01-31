#include <stdio.h>
#include <stdlib.h>


void swap(int* xp, int* yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}



void heapfy(int arr[], int N, int i) {

	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	
	if (left<N && arr[left]>arr[largest]) {
		largest = left;

	}
	if (right<N && arr[right]>arr[largest]) {
		largest = right;
	}

	if (largest != i) {
		swap(&arr[i], &arr[largest]);
		heapfy(arr, N, largest);
	}
}

void heapSort(int arr[], int N) {

	int i;
	for (i = N / 2 - 1; i >= 0; i--) {
		heapfy(arr, N, i);
	}
	for (i = N - 1; i >= 0; i--) {
		swap(&arr[0], &arr[i]);
		heapfy(arr, i, 0);

	}
}
void Print(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
		
	}
	printf("\n");
}

int main() {

	int arr[] = { 12,45,78,95,35,6,49,26,21 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Unsorted Array:");
	Print(arr, size);
	heapSort(arr, size);
	printf("Sorted Array:");
	
	Print(arr, size);


	return 0;
}