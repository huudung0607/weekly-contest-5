#include <iostream>
#include <vector>
using namespace std;
int a[1000001];
const int mod = 1e9 + 7;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n / 2; i++)
	{
		cout << a[i] << " " << a[n - i - 1] << endl;
	}
}
