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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int incom;
    while (true)
    {
        cin >> incom;
        if (incom == 0)
        {
            break;
        }
        if (incom <= 1000000)
        {
            cout << incom << endl;
        }
        else if (incom <= 5000000)
        {
            cout << (incom * 90) / 100 << endl;
        }
        else
        {
            cout << (incom * 80) / 100 << endl;
        }
    }
}