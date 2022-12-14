#include <bits/stdc++.h>

using namespace std;
long long fibbonacci(int n)
{
    if (n <= 1)
        return 0;
    else if (n == 2)
        return 1;
    else
    {
        long long sum = fibbonacci(n - 1) + fibbonacci(n - 2) + fibbonacci(n - 3);
        return sum;
    }
}
int main()
{
    int n;
    cin >> n;
    long long fibbo = fibbonacci(n - 1) + fibbonacci(n - 2) + fibbonacci(n - 3);
    cout << fibbo;
    return 0;
}