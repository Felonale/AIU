#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, s = 0;
    long p = 1;
    printf("Enter array length: ");
    scanf("%d", &n);

    int *x = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d array element: ", i+1);
        scanf("%d", &x[i]);
        s += x[i];
        p *= x[i];
    }
    free(x);

    printf("Sum: %d\n", s);
    printf("Product: %ld", p);
}