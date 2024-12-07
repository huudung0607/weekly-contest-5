#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int a[1000001];
const int mod = 1e9 + 7;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	int min = INT_MAX;
	for (int i = 1; i <= n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == min)
		{
			cout << i << " ";
		}
	}
	cout << endl;
	for (int i = n; i >= 1; i--)
	{
		if (a[i] == min)
		{
			cout << i << " ";
		}
	}
}
