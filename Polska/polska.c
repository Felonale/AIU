#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a,b,c,d,e;
    printf("Enter A: ");
    scanf("%f", &a);
    printf("Enter B: ");
    scanf("%f", &b);
    printf("Enter C: ");
    scanf("%f", &c);
    printf("Enter D: ");
    scanf("%f", &d);
    printf("Enter E: ");
    scanf("%f", &e);
    printf("(a+b)*(c-d)/e = %f", (a+b)*(c-d)/e);
    return 0;
}