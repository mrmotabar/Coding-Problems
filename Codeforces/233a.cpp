/*mohammadreza motabar*/
#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define ll long long
#define pb push_back
typedef pair<int, int> pii;
typedef pair<long long int, long long int> pll;
const ll MAX_N = 1e5 + 10, INF = 1e9;
int n;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	if (n % 2 == 1)
	{
		cout << -1 << endl;
		return 0;
	}
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			cout << i + 1 << " ";
		}
		else
		{
			cout << i - 1 << " ";
		}
	}
}
