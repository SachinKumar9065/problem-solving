                              // HEAP SORT
// NAME - SACHIN KUMAR
// ROLL - 2100321540134
// BRANCH - CSE(DS)
// SECTION - B

#include <stdio.h>
// Function to swap the position of two elements
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// To heapify a subtree rooted with node i
// which is an index in arr[].
// n is size of heap
void heapify(int arr[], int N, int i)
{
    // Find largest among root, left child and right child
 
    int largest = i;
 
    int left = 2 * i + 1;
 
    int right = 2 * i + 2;
 
    if (left < N && arr[left] > arr[largest])
 
        largest = left;
 
    if (right < N && arr[right] > arr[largest])
 
        largest = right;
 
    // Swap and continue heapifying if root is not largest
    // If largest is not root
    if (largest != i) {
 
        swap(&arr[i], &arr[largest]);
 
        // Recursively heapify the affected
        // sub-tree
        heapify(arr, N, largest);
    }
}
 
// Main function to do heap sort
void heapSort(int arr[], int N)
{
 
    // Build max heap
    for (int i = N / 2 - 1; i >= 0; i--)
 
        heapify(arr, N, i);
 
    // Heap sort
    for (int i = N - 1; i >= 0; i--) {
 
        swap(&arr[0], &arr[i]);
 
        // Heapify root element to get highest element at
        // root again
        heapify(arr, i, 0);
    }
}
 
// A utility function to print array of size n
void printArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int N,i,arr[20];
    // int arr[] = { 12, 11, 13, 5, 6, 7 };
    // int N = sizeof(arr) / sizeof(arr[0]);
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d",&N);
    printf("ENTER ARRAY ELEMENTS: ");
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
 
    // Function call
    heapSort(arr, N);
    printf("Sorted array is\n");
    printArray(arr, N);
}