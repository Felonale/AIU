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

    int **x = (int **)malloc(n * sizeof(int **));
    for (size_t i = 0; i < n; i++)
    {
        x[i] = (int *)malloc(m * sizeof(int));
    }
    

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            x[i][j] = rand()%100;
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }
    printf("Let's tranpose\n");
    int **xT = (int **)malloc(m * sizeof(int **));
    for (size_t i = 0; i < m; i++)
    {
        xT[i] = (int *)malloc(n * sizeof(int));
    }
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            xT[i][j] = x[j][i];
            printf("%d\t", xT[i][j]);
        }
        printf("\n");
    }
    free(xT);
    free(x);
    return(0);
}