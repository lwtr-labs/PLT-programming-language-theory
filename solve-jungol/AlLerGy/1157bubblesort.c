#include <stdio.h>

int main(void)
{
    int arr[100], n, i, k;
    int *p = arr, max, sortMax, swap = 1, temp;

    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
    {
        scanf(" %d", (arr + i));
    }


    // i think the code below this line, should be worked to while loop
    
    k = n; // <- cutting maximum value (sorted)

    while (1)
    {

        swap = 1;
        max = *p;
        for (i = 1; i < k; i++) // find max (not sorted yet)
        {
            if (max < *(p + i))
            {
                max = *(p + i);
            }
        }   // complete
        sortMax = *(p);

        swap = 0;
        for (i = 0; i < k; i++) // distinguish "sort_max: Using to sort" and "max: check only variable"
        {
            if (sortMax < *(p + i))
            {
                temp = sortMax;
                sortMax = *(p + i);
                *(p + i) = temp;
                swap = 1;
            }

            if (sortMax == max)
            {
                if (swap == 0)
                {
                    break;
                }
                for (i = 0; i < n; i++)
                {
                    printf("%d ", *(p + i));
                }
                printf("\n");
                k -= 1;
                break;
                
                
            }
        }
        if (swap == 0)
        {
            break;
        }
    }
}
