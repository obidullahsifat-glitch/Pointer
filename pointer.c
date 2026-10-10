#include <stdio.h>
int main()
{
    int c=10;

    printf("Address of C=%p\n",&c);
    printf("Value of C=%d\n\n",c);
    int* p;
    p=&c;
    printf("Address of C=%p\n",p);
    printf("Value of C=%d\n\n",*p);

    *p=2;
    printf("Address of C=%p\n",p);
    printf("Value of C=%d\n\n",*p);

    return 0;
}

