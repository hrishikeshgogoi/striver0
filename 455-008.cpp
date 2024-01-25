//Count no. of digits present in a number that divide the number//
#include<iostream>
using namespace std;
int main()
{
int a,n,b,c=0;
cin >> n;
b=n;
while (n!=0)
{
	a=n%10;
	if(n%a==0&&a!=0)
	{
		c=c+1;
	}
	n=n/10;
}
cout << c << " digits divide " << b << endl;
return 0;
}