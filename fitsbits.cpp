#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int x, n;
    scanf("%d%d", &x, &n);
    int t =  !((~x & (x >> 0x1F)) + (x & ~(x >> 0x1F))) >> (n + ~0);
    printf("%d", t);
    return 0;
}
