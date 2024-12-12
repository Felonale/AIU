#include <stdio.h>
#include <stdlib.h>

int bubblesort(int array[], int size){
    int sorted = 0;

    int tempnumber;
    while (!sorted){
        sorted = 1;
        for (size_t i = 1; i < size; i++){
            if (array[i] < array[i-1]){
                sorted = 0;
                tempnumber = array[i];
                array[i] = array[i-1];
                array[i-1] = tempnumber;
            }
            printf("%d: ", i);
            for (size_t i = 0; i < size; i++){
                printf("%d\t", array[i]);
            }
            printf("\n");
        }
    }
    return 0;
}

int main(){
    int years[8] = {1984, 1756, 1590, 1975, 1984, 1992, 2004, 1967};
    int arraysize = sizeof(years)/sizeof(int);

    for (size_t i = 0; i < arraysize; i++){
        printf("%d\t", years[i]);
    }
    printf("\n");
    bubblesort(years, arraysize);
    for (size_t i = 0; i < arraysize; i++){
        printf("%d\t", years[i]);
    }
}