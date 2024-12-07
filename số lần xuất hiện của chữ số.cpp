#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char c;
	cin >> c;
	vector <char> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == c)
		{
			dem++;
		}
	}
	cout << dem;
}
