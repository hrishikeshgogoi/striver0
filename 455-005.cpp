#include<iostream>
using namespace std;
int main()
{
int i,n,m,a=0,b=1;
cin >> n;
if (n==0)
cout << a << endl;
else if (n==1)
cout << b << endl;
else if (n>1)
{
a=0;
b=1;
for(i=2;i<=n;i++)
{
m=a+b;
a=b;
b=m;
}
cout << m << endl;
}
else
{
cout << "Invalid input";
}
return 0;
}