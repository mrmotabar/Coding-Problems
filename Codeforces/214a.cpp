#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int ans = 0;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if ((i * i + j == n && j * j + i == m))
			{
				ans++;
			}
		}
	}
	cout << ans;
}
