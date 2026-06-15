
#include <stdio.h>
#include <stdlib.h>

void printArr ( int arr[], int n) {
    int i;
    for ( i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

void insertionSort(int arr[],int aux[], int n) { 
    int i;
    int temp;
    for (i = 1; i < n; i++) {
        int key1 = aux[i]; 
        int key2 = arr[i]; 
        int j = i-1; 

        while (j >= 0 && aux[j] > key1) { 
            aux[j+1] = aux[j]; 
            arr[j+1] = arr[j];
            if (arr[j - 1] > arr[j]) {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp; 
            } 
            j = j-1; 
        } 
        aux[j+1] = key1; 
        arr[j+1] = key2; 
    } 
}

int countBits(int a) { 
    int count = 0; 
    while (a) { 
        if (a & 1 ) 
            count+= 1; 
        a = a>>1; 
    } 
    return count; 
} 

void sortBySetBitCount(int arr[], int n) {

    int i;
    // Create an array and store count of set bits in it. 
    int aux[n]; 
    for ( i = 0; i < n; i++) 
        aux[i] = countBits(arr[i]); 

    // Sort arr[] according to values in aux[] 
    insertionSort(arr, aux, n); 
} 

int main( void ) {

    int num_of_elements;
    int i;

    printf("Enter the size of the array \n");
    scanf("%d", &num_of_elements);

    //int arr[num_of_elements];
    int *arr = (int *) malloc(num_of_elements * sizeof(int));

    printf("Enter the elements \n");
    for ( i = 0; i < num_of_elements; i++ ) {
        //scanf("%d", &arr[i]);
        scanf("%d", (arr + i));
    }
    sortBySetBitCount(arr, num_of_elements); 

    printArr(arr, num_of_elements); 

    return 0; 
} 
