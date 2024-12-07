#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;
int a[1000001];
int b[1000001];
const int mod = 1e9 + 7;

bool prime(int n)
{
	if (n < 2)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (prime(a[i]))
		{
			a[i] = 28;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}

}
