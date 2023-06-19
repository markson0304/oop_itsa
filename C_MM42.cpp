#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n,i;
    double S=0;
    cin >> n;
    for(i=1; i<=n; i++)
        S+=pow(-1.0,(i+1)*1.0)*1/(2*i-1);
    cout << fixed << setprecision(3) << S << endl;

    return 0;
}