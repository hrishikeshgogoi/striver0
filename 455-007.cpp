//Find maximum or swap numbers depending on user choice//
#include <iostream>
using namespace std;
int Maximum(int x, int y)
{
	if (x>y)
	return x;
	else
	return y;
}
void Swap(int &x, int &y)
{
	int o;
	o=x;
	x=y;
	y=o;
}
int main()
{
	int s, a, b, m;
    cout << "Enter 1 to find maximum or 2 to swap" << endl;
	cin >> s;
	cin >> a >> b;
	switch (s)
	{
	case 1:
		m = Maximum(a, b);
		cout << m << endl;
		break;
	case 2:
		Swap(a, b);
		cout << a << endl << b << endl;
		break;
	default:
		cout << "Invalid option";
	}
	return 0;
}