#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n, x, y, z, sumx = 0, sumy = 0, sumz = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		sumx += x;
		cin >> y;
		sumy += y;
		cin >> z;
		sumz += z;
	}
	if (sumx == 0 && sumy == 0 && sumz == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
