#include <iostream>

using namespace std;

int main()
{
    int n, a[100], i = 0;
    cin >> n;
    while(n)
    {
        if(n & 1)
            a[i] = 1;
        else
            a[i] = 0;
        n >>= 1;
        i++;
    }
    for(int t = i - 1; t >= 0; t--)
        cout << a[t];
    return 0;
}
