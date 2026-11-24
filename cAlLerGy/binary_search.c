#include <stdio.h>
#define MAX_SIZE 50000

int binary_search(int arr[], int size, int target);

int main(void) {
    int numbers[MAX_SIZE];

    int array_range, input, t;

    scanf(" %d", &array_range);

    for(int i = 0; i <array_range; i++) {
        scanf(" %d", &input);
        numbers[i] = input;
    }

    scanf(" %d", &t);

    for(int i = 0; i < t; i++) {
        scanf(" %d", &input);
        printf("%d\n", binary_search(numbers, array_range, input));
    }

    return 0;
}

int binary_search(int arr[], int size, int target) {
    int max_range = size - 1;
    int min_range = 0;
    int mid, result = 0;

    for(int r = 0; r < size; r++) {
        if (arr[min_range] == target) {
            result = min_range + 1;
            break;
        }

        if (arr[max_range] == target) {
            result = max_range + 1;
            break;
        }
        
        mid = (max_range - min_range) / 2;

        if(arr[mid] == target) {
            result = mid + 1;
            break;
        } else if(arr[mid] < target) {
            min_range = mid + 1;
        } else {
            max_range = mid - 1;
        }
    }

    return result;
}