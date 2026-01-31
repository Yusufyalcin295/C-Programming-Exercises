#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Swap(int* xp, int* yp) {

	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n) {
	
	int i, j;
    bool swapped;

	for (i = 0; i < n - 1; i++) {

		swapped =false;

		for (j = 0; j < n - 1 - i; j++) {

			if (arr[j] > arr[j + 1]) {
				Swap(&arr[j], &arr[j + 1]);
				swapped = true;
			}
			

		}

		if (swapped == false ) {
			break;
		}


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

	int arr[] = { 12,8,36,45,3,7 };
	int i;
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Unsorted Array:");
	Print(arr,n);
	printf("Unsorted Array:");
	bubbleSort(arr,n);
	Print(arr,n);



}