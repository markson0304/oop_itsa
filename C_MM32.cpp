#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x,a,b,c;
    cin >> x;
    a=x/100;
    b=(x%100)/10;
    c=x%10;
    bool isArmstrong=(pow(a,3)+pow(b,3)+pow(c,3))==x;
    if(isArmstrong)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}