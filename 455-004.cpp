/*Print area of a circle or rectangle depending on input*/
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

double area(int ch, vector<double> a)
{
    switch(ch)
    {
    case 1:
        return M_PI*a[0]*a[0];
    case 2:
        return a[0]*a[1];
    default:
        return -1;
    }
}

int main()
{
    int ch;
    vector<double> parameter;
    cout << "Area calculator: " << endl << "Enter 1 for circle or 2 for rectangle" << endl;
    cin >> ch;
    if (ch==1)
    {
        cout << "Enter radius" << endl;
            double value;
            cin >> value;
            parameter.push_back(value);
        double result=area(ch,parameter);
        if (result!=-1)
        cout << "Area of the circle is " << result << endl;
        else
        cout << "Error" << endl;
    }
    else if (ch==2)
    {
        cout << "Enter length and breadth" << endl;
        for (int i=0;i<2;i++)
        {
            double value;
            cin >> value;
            parameter.push_back(value);
        }
        double result=area(ch,parameter);
        if (result!=-1)
        cout << "Area of the rectangle is " << result << endl;
        else
        cout << "Error" << endl;
    }
    else
    cout << "Enter either 1 or 2" << endl;
    return 0;
}