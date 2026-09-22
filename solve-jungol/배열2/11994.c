#include <stdio.h>

int main(void)
{
    int scores[4][4] = { 0 };

    int i, j, sum = 0;

    // get student scores
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf(" %d", &scores[i][j]);
        }
    }

    // calculate row total
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum += scores[i][j];
        }

        scores[i][3] = sum;

        sum = 0;
    }

    // calculate column total
    for (j = 0; j < 4; j++)
    {
        for (i = 0; i < 3; i ++)
        {
            sum += scores[i][j];
        }
        scores[3][j] = sum;
        sum = 0;
    }

    // print table
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}