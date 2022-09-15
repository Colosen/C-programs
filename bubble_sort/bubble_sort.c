#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int bubble_sort(int *p);
void swap(int *x, int *y);


int main() {

    int arr[MAX_SIZE], i;

    // assigning random values into arr[] between 0 and 1000
    for (i = 0; i < MAX_SIZE; i++) {
        arr[i] = rand() % 1000; 
    }

    // printing assigned array input
    for (i = 0; i < MAX_SIZE; i++) {
        printf("%d, " ,arr[i]);
    }

    printf("\n");

    int *array_pointer = arr;
    bubble_sort(array_pointer);

    // print sorted array
    printf("\n");
    for (i = 0; i < MAX_SIZE; i++) {
        printf("%d, ", arr[i]);
    }

    printf("\n");

    return 0;

}


// We will be passing an array pointer to bubble_sort(int *arr) and the array will be sorted.
int bubble_sort(int *arr) { // *p = array pointer

    printf("\n Bubble sort called Array pointer: %p ", arr);

    // bubble sort
    int temp =0;
    for (int i = MAX_SIZE-1; i >0 ; i--) { // goes on rounds for MAX_SIZE number of times
        for (int j = 0; j < i; j++) { //does swapping for each round
            if (*(arr+j) > *(arr+j+1)) {
                swap((arr+j), (arr+j+1));
            }
        }
    }

}


// swap values stored in two addresses
void swap(int *x, int *y) {

    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

}

