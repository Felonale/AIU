#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k = 0;
    printf("Enter array length: ");
    scanf("%d", &n);

    int *x = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter [%d] value: ", i+1);
        scanf("%d", &x[i]);
        if((i+1) % 2 != 0 && x[i] % 10 == 5)
        {
            //printf("Debug +1! %d", x[i]);
            k += 1;
        }
    }
    free(x);
    printf("k = %d", k);
    
}