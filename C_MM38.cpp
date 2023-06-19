#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    if(x+y>z and x+z>y and y+z>x)
        cout << "fit" << endl;
    else
        cout << "unfit" << endl;

    return 0;
}