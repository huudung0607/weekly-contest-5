#include <iostream>
#include <vector>
using namespace std;
char a[1000001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int hoa = 0, thuong = 0, so = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			hoa++;
		}
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			thuong++;
		}
		if (a[i] >= '0' && a[i] <= '9')
		{
			so++;
		}
	}
	cout << thuong << " " << hoa << " "  << so << endl;
}
