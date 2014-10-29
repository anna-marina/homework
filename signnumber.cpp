#include <stdio.h>

int main()
{
	int n;
	scanf("%d %d", &n);
	int t = sizeof(int) * 8 -1;
	int res = !(n >> t) + (n >> t) + ~(!n + ~0);
	printf ("%d", res);
	return 0;
}
