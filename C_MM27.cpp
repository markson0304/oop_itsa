#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int sum= ((a+b)*(abs(a-b)+1))/2;
    cout << sum << endl;

    return 0;
}
