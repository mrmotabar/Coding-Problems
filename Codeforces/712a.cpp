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
int n, a[MAX_N], b[MAX_N];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	b[n] = a[n];
	for (int i = n - 1; i >= 1; i--)
	{
		b[i] = a[i] + a[i + 1];
	}
	for (int i = 1; i <= n; i++)
	{
		cout << b[i] << " ";
	}
}
