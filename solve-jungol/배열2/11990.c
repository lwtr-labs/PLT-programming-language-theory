#include <stdio.h>

int main(void)
{
    int arr[5] = { 95, 75, 85, 100, 50 };
    int i, temp;
    int swap = 1;

    // buble sort
    while (swap = 1)
    {
        swap = 0;
        for (i = 0; i < 4; i++)
        {
            if (arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;

                swap = 1;
            }
            
        }
        
        if (swap != 1) {
            break;
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}