#include <stdio.h>

int main(void) {
    int arr[1000], i, j, key, n;    // arr: list, n = length of arr

    scanf("%d", &n);

    for(j = 0; j < n; j++)
    {
        scanf(" %d", &arr[j]);
    }

    for(j = 1; j < n; j++)
    {
        key = arr[j];
        i = j - 1;

        while ((i > -1) && (arr[i] > key))
        {
            arr[i + 1] = arr[i];
            i -= 1;
        }
        arr[i + 1] = key;
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}