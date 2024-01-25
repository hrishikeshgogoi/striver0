//Print sum of even and odd digits in a number//
#include<iostream>
using namespace std;
int main()
{
    int n,e=0,o=0,a;
    cin >> n;
    while (n!=0)
    {
        a=n%10;
        if (a%2==0)
            e=e+a;
        else
            o=o+a;
        n=n/10;
    }
    cout <<"Sum of even digits: "<< e << endl << "Sum of odd digits:" << o << endl;
    return 0;
}