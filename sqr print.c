#include<stdio.h>

void sqr_it(int num);

int main()
{
    sqr_it(24);

    return 0;
}

void sqr_it(int num)
{
    int a;
    a = sqrt(num);
    printf("%d",a*a);
}
