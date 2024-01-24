/*You are given two numbers 'a' and 'b'.
Compare the numbers and print the relation.*/
#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    if (a<b)
    {
        cout << a << " is smaller than " << b << endl;
        return 0;
    }
    else if (a>b)
    {
        cout << a << " is greater than " << b << endl;
        return 0;
    }
    else if (a==b)
    {
        cout << a << " is equal to " << b << endl;
        return 0;
    }
    else
    {
        cout << "Wrong input";
        return -1;
    }
}