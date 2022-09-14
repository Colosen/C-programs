#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 100 // array is of size 100

int main() {

    int arr[MAX_SIZE];
    int mid, lower = 0, upper = MAX_SIZE - 1;
    int search_element; // element to be searched for

    for (int i = 0; i < MAX_SIZE; ++i) // creating array [0, 1, 2, 3, ..., MAX_SIZE - 1]
        arr[i] = i;
    
    // input search element
    printf("Enter search element: ");
    scanf("%d", &search_element);

    clock_t start = clock(); // measure time taken to search

    while (1) {
        mid = (lower + upper)/2;
        if (search_element < arr[mid] && search_element >= arr[0])
            upper = mid - 1;
        else if (search_element > arr[mid] && search_element <= arr[99])
            lower = mid + 1;
        else if (search_element == arr[mid]) {
            printf("Element found at %dth index.\n", mid);
            break;
        }
        else {
            printf("Element not found.\n");
            break;
        }
    }

    clock_t end = clock();
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Time elapsed: %f ", time_spent);

    return 0;
}

