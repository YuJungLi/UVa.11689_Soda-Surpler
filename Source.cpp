#include <iostream>
#include <math.h>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	int n;
	cin >> n;
	while (n--)
	{
		int e, f, c, sum = 0;
		cin >> e >> f >> c;
		e += f;
		while (e / c)
		{
			sum += e / c;
			e = e / c + e%c;
		}
		cout << sum << endl;
	}
	return 0;
}