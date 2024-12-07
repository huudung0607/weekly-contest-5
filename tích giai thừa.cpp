#include <iostream>
#include <vector>
using namespace std;
int a[1000001];
const int mod = 1e9 + 7;

long long giaithua(int n)
{
	long long tich = 1;
	for (int i = 1; i <= n; i++)
	{
		tich *= i % mod;
		tich %= mod;
	}
	return tich;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long ans = 1;
	for (int i = 0; i < n; i++)
	{
		ans *= giaithua(a[i]) % mod;
		ans %= mod;
	}
	cout << ans;
}
