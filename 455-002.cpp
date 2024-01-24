//You’re given a data type. Print its size in bytes.//
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string x;
    cout << "Enter datatype:";
    cin >> x;
	transform(x.begin(),x.end(),x.begin(),::tolower);
    int size;

    if (x == "integer") size = 4;
    else if (x == "long") size = 8;
    else if (x == "float") size = 4;
    else if (x == "double") size = 8;
    else if (x == "character") size = 1;
    else {
        cout << "Unrecognized datatype: " << x << endl;
        return 1;
    }

    cout << "Size is " << size << endl;
    return 0;
}
