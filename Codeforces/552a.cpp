#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n, ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		ans += ((x2 - x1 + 1) * (y2 - y1 + 1));
	}
	cout << ans;
}
