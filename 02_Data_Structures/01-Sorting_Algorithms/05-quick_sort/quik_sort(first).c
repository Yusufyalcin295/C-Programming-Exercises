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
	}
	heapfy(arr, N, largest);

}
void heapSort(int arr[], int N) {

	int i;
	for (i = N / 2 - 1; i >= 0; i--) {
		heapfy(arr, N, i);
	}
	for (i = N - 1; i <= 0; i--) {
		swap(&arr[0], &arr[i]);

		heapfy(arr, i, 0);

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
	int arr[] = {12,52,74,6,7,19,3,4,72,35};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Unsorted Array:");
	Print(arr, n);
	printf("Sorted Array :");
	heapsort(arr,n);
	Print(arr, n);


	return 0;
}
