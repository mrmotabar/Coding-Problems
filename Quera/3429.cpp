/*mohammadreza motabar*/
#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define ll long long
#define pb push_back
typedef pair<int, int> pii;
const ll MAX_N = 1e5, INF = 1e9;
int t;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> t;
	if (t < 0)
	{
		cout << "Ice";
	}
	else if (t > 100)
	{
		cout << "Steam";
	}
	else
	{
		cout << "Water";
	}
}
