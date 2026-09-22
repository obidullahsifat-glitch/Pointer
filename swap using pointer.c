#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping: a = %d, b = %d\n", *a, *b);
}
int main()
{

    int a = 4, b = 9;
    swap(&a, &b);
}