#include <bits/stdc++.h>

using namespace std;
long long power(int x, int n)
{
    if (n != 0)
        return x * power(x, n - 1);
    else
        return 1;
}
int main()
{
    int n, x;
    cin >> n;
    cin >> x;
    long long ans = power(x, n);
    cout << ans;
    return 0;
}