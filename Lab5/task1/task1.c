#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(NULL));
    int n, m, s = 0;
    printf("Enter array\'s first dimension length (n): ");
    scanf("%d", &n);
    printf("Enter array\'s second dimension length (m): ");
    scanf("%d", &m);

    int *x = (int *)malloc(n * sizeof(int) + m * sizeof(int));

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            x[m,n] = rand()%100;
            printf("%d\t", x[m,n]);
            s += x[m,n];
        }
        printf("\n");
    }
    printf("Summary of array: %d", s);
    free(x);
}