#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Shift elements of arr[0..i-1], that are greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n, i;

    // Ask user for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Variable-length array (VLA)

    // Input elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array:\n");
    printArray(arr, n);

    // Sort the array
    insertionSort(arr, n);

    printf("Sorted array in ascending order:\n");
    printArray(arr, n);

    return 0;
}
