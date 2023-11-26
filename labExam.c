// declare an int arr size 10 user input
// asc order using selection short

#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int *arr, int size){
    for(int i = 0; i < size - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < size; j++){
            if(arr[minIndex] > arr[j])
                minIndex = j;
        }
        swap(&arr[minIndex], &arr[i]);
    }
}

int main(){
    int arr[10];
    printf("Enter array elems for size(10) : \n");
    for(int i = 0; i < 10; i++){
        scanf(" %d", arr + i);
    }

    selectionSort(arr, 10);

    // printing...
    printf("Sorted list : \n[ ");
    for(int i = 0; i < 10; i++){
        i != 9 ? printf("%d, ", arr[i]) : printf("%d ", arr[i]);
    }
    printf("]");
}
