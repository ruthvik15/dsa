#include <stdio.h>

#define MAX_HEAP_SIZE 100

int heap[MAX_HEAP_SIZE];
int heapSize = 0;

// Function to swap two elements in the heap
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to maintain max-heap property after inserting an element
void maxHeapifyUp(int index) {
    int parent = (index - 1) / 2;

    while (index > 0 && heap[index] > heap[parent]) {
        swap(&heap[index], &heap[parent]);
        index = parent;
        parent = (index - 1) / 2;
    }
}

// Function to insert an element into the max heap
void insertMaxHeap(int value) {
    if (heapSize >= MAX_HEAP_SIZE) {
        printf("Heap is full. Cannot insert more elements.\n");
        return;
    }

    heap[heapSize] = value;
    heapSize++;

    maxHeapifyUp(heapSize - 1);
}

// Function to print the elements of the max heap
void printMaxHeap() {
    printf("Max Heap: ");
    for (int i = 0; i < heapSize; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");
}

int main() {
    // Example usage:
    heap[0] = 30; // Existing max heap
    heap[1] = 20;
    heap[2] = 10;
    heapSize = 3;

    printMaxHeap();

    // Insert two new elements into the max heap
    insertMaxHeap(40);
    insertMaxHeap(25);

    printMaxHeap();

    return 0;
}
