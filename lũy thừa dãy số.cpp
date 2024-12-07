#include <iostream>
#include <vector>
#include <climits>
using namespace std;
const int mod = 1e9 + 7;

long long pow_num(long long a, long long b)
{
	long long ans = 1;
	while (b != 0)
	{
		if (b % 2 == 1)
		{
			ans = (ans * a) % mod;
		}
		a = (a * a) % mod;
		b /= 2;
	}
	return ans;
}

int main()
{
	int n;
	cin >> n;
	vector <int> a(n), b(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = (sum + pow_num(a[i], b[i])) % mod;
		sum %= mod;
	}
	cout << sum;

}
