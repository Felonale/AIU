#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("n - positive");
    }
    else
    {
        if (n < 0)
        {
            printf("n - negative");
        }
        else
        {
            printf("n - zero");
        }
    }

    printf("\nPress any button to continue");
    getch();
    return 0;
}
