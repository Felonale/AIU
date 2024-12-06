#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    if (x > 0)
    {
        y = 2 * x;
    }
    else
    {
        y = -2 * x;
    }

    printf("y: %d", y);

    printf("\nPress any button to continue");
    getch();
    return 0;
}