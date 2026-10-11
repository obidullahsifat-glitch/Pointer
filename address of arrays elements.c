#include <stdio.h>
int main()
{
    int i;
    int arr[5]={1,2,3,4,5};
    int* p;
    p=arr;
    for(i=0;i<5;i++)
    {
        printf("Address : %p\n",(p+i));

    }

    return 0;
}
