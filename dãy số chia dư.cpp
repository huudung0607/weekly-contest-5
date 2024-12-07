#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int a[1000001];
const int mod = 1e9 + 7;

long long pow_num(int a, int b)
{
	long long res = 1;
	for (int i = 1; i <= b; i++)
	{
		res *= a % mod;
		res %= mod;
	}
	return res;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += pow_num(a[i], i) % mod;
		sum %= mod;
	}
	cout << sum;

}
