#include <stdio.h>
#include <malloc.h>

int printTwoDimArray(int **array, int firstdimension, int seconddimension)
{
    printf("Printin array!\n");
    for (size_t i = 0; i < firstdimension; i++)
    {
        for (size_t j = 0; j < seconddimension; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    printf("Done\n");
    return 0;
}

int *createOneDimArray(int size)
{
    int *x = (int *)malloc(size * sizeof(int *));
    return x;
}

int **createTwoDimArray(int firstdimension, int seconddimension)
{
    int **x = (int **)malloc(firstdimension * sizeof(int));
    for (size_t i = 0; i < firstdimension; i++)
    {
        x[i] = (int *)malloc(seconddimension * sizeof(int));
    }
    return x;
}

int randomFillOneDimArray(int *array, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        array[i] = rand() % 10;
        printf("%d\t", array[i]);
    }
    return 0;
}

int randomFillTwoDimArray(int **array, int firstdimension, int seconddimension)
{
    for (size_t i = 0; i < firstdimension; i++)
    {
        for (size_t j = 0; j < seconddimension; j++)
        {
            array[i][j] = rand() % 10;
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int removeArrayElementTD(int** array, int firstdimension, int seconddimension)
{
    for (size_t i = 0; i < firstdimension; i++)
    {
        printf("Checking %d\n", i);
        for (size_t j = 0; j < seconddimension; j++)
        {
            if (array[i][j] == 0)
            {
                if (i == firstdimension-1)
                {
                    firstdimension--;
                    array = (int**)realloc(array, firstdimension * sizeof(int));
                }
                for (size_t inner = i; inner < firstdimension-1; inner++)
                {
                    array[inner] = array[inner+1];
                }
                firstdimension--;
                array = (int**)realloc(array, firstdimension * sizeof(int));
                printTwoDimArray(array, firstdimension, seconddimension);
                i = 0;
                j = 0;
            }
        }
    }
    printf("New alloc mem %d\n", _msize(array));
    return 0;
}


//main part

int main()
{
    srand(time(NULL));
    int n, m;
    printf("Enter array\'s first dimension length (n): ");
    scanf("%d", &n);
    printf("Enter array\'s second dimension length (m): ");
    scanf("%d", &m);

    int **array = createTwoDimArray(n, m);
    randomFillTwoDimArray(array, n, m);
    printf("----------------------------------------\n");
    removeArrayElementTD(array, n, m);
    // for (size_t i = 0; i < n; i++)
    // {
    //     for (size_t j = 0; j < m; j++)
    //     {

    //     }
        
    // }
    printTwoDimArray(array, n, m);
    printf("Old alloc mem %d", _msize(array));
    free(array);

    return (0);
}