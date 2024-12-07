#include <iostream>
using namespace std;

int thuanngich(int n)
{
	int temp = n;
	int sum = 0;
	while (n)
	{
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	if (sum == temp)
	{
		return 1;
	}
	return 0;
}

int a[100001];
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
		if (thuanngich(a[i]))
		{
			cout << a[i] << endl;
			break;
		}
	}
	for (int i = n - 1; i >= 0; i--)
	{
		if (thuanngich(a[i]))
		{
			cout << a[i] << endl;
			break;
		}
	}
}
