#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(NULL));
    int n, m = 0;
    printf("Enter array\'s first dimension length (n): ");
    scanf("%d", &n);
    printf("Enter array\'s second dimension length (m): ");
    scanf("%d", &m);

    int *x = (int *)malloc(n * sizeof(int) + m * sizeof(int));
    int *max = (int *)malloc(3 * sizeof(int));
    max[0] = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            x[i,j] = rand()%100;
            printf("%d\t", x[i,j]);
            if (max[0] < x[i,j])
            {
                max[0] = (int)x[i,j];
                max[1] = i;
                max[2] = j;

            }
            
        }
        printf("\n");
    }
    printf("Max number of an array: %d\n", max[0]);
    printf("Max number\'s place in array: [%d,%d]", max[1]+1, max[2]+1);
    free(x);
}