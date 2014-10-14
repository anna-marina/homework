#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int t = (n >> 0x1F) + !( n >> 0x1F) + ~( !n + ~0 );
    printf("%d", t);
    return 0;
}
