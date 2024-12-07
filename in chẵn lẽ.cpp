#include <iostream>
#include <vector>
#include <climits>
using namespace std;
const int mod = 1e9 + 7;

int a[1000001];
int chan[1000001];
int le[1000001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int chan_dem = 0;
	int dem_le = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			chan[chan_dem++] = a[i];
		}
		else
		{
			le[dem_le++] = a[i];
		}
	}
	for (int i = 0; i < chan_dem; i++)
	{
		cout << chan[i] << " ";
	}
	for (int i = 0; i < dem_le; i++)
	{
		cout << le[i] << " ";
	}
}
