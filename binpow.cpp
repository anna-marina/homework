#include <iostream>

using namespace std;

int main()
{
    int x, n1, n, res=1;
    cin >> x >> n1;
    if (n1 < 0)
        n = -n1;
    else
        n = n1;
    while (n!=0)
		if (n & 1)
		{
			res *= x;
			--n;
		}
		else
		{
			x *= x;
			n >>= 1;
		}
    double res1 = res;
    if(n1 < 0)
        cout << (1 / res1);
    else
        cout << res1;
    return 0;
}
