#include <stdio.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void heapify(int arr[], int N, int i) {
    int largest = i;
    int l = 2 * i+1 ;
    int r = 2 * i + 2;

    if (l < N && arr[l] > arr[largest])
        largest = l;

    if (r < N && arr[r] > arr[largest])
        largest = r;

    if (largest != i) 
        swap(&arr[i], &arr[largest]);
        heapify(arr, N, largest);
    }


void buildHeap(int arr[], int N) {
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);
}

int main() {
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);

    buildHeap(arr, N);

    printf("Heapified array: ");
    for (int i = 0; i < N; ++i)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}