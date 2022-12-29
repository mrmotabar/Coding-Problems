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

int n, m;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3 * m; j++)
        {
            if (j < m || j >= 2 * m)
            {
                cout << 'X';
            }
            else
            {
                cout << '.';
            }
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3 * m; j++)
        {
            if (j < m || j >= 2 * m)
            {
                cout << '.';
            }
            else
            {
                cout << 'X';
            }
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3 * m; j++)
        {
            if (j < m || j >= 2 * m)
            {
                cout << 'X';
            }
            else
            {
                cout << '.';
            }
        }
        cout << endl;
    }
}
