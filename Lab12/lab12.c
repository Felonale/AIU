#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// Количество чисел, делящихся на 5. Пример: 53x70#455. -> 3

int sizeofstring(char *array)
{
    int size = 0;

    for (size_t i = 0;; i++){
        if (array[i] == 0){
            return size;
        }
        size++;
    }
}

int cum(){
    printf("sperm joke");
    return 0;
}

#define stringsize 1024

int main()
{
    char str[stringsize];
    char tempstr[stringsize] = "";
    int amountofnums = 0;

    printf("Enter your cool string: ");
    if (!fgets(str, 1024, stdin)){
        return 1;
    }
    int truesizeofstring = sizeofstring(str);
    int currentnumber = 0;
    int tempstringindex = 0;
    // int digit;
    char currentchar = 'a';
    long *numbers = (long *)calloc(truesizeofstring/2, sizeof(long));

    for (size_t i = 0; i < truesizeofstring; i++){
        currentchar = str[i];
        if (isdigit(currentchar)){
            tempstr[tempstringindex] = currentchar;
            tempstringindex++;
        }
        else if (currentchar == '-' && !tempstr[0]){
            tempstr[0] = currentchar;
            tempstringindex++;
        }
        else if(!tempstr[1]){
            memset(tempstr,0,sizeof(tempstr));
            tempstringindex = 0;
            }
        else{
            numbers[currentnumber] = atoi(tempstr);
            currentnumber++;
            memset(tempstr,0,sizeof(tempstr));
            tempstringindex = 0;
            if (currentchar == '-'){
                tempstr[0] = currentchar;
                tempstringindex++;
            }
        }
    }

    if (numbers[0]){
        printf("Numbers in string: ");
        for (size_t i = 0;; i++){
            if (!numbers[i]){
                break;
            }   
            if (numbers[i] % 5 == 0){
                amountofnums++;
            }
            printf("%d\t", numbers[i]);
        }
    }
    else{
        printf("You have no numbers in string at all!!!");
    }


    
    // free(numbers);
}