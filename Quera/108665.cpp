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

string s;
int ans = 1;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> s;
    for (char c : s)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            ans *= 2;
        }
    }
    cout << ans;
}
