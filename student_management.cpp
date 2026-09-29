#include <stdio.h>

#define CHECK(n) ((n%2==0)?printf("Even"):printf("Odd"))

int main()
{
    int n;

    scanf("%d",&n);

    CHECK(n);

    return 0;
}
