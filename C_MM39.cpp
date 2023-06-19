#include <iostream>

using namespace std;

int main()
{
    int a,b,c,a2,b2,c2;
    cin >> a >> b >> c;
    a2=a*a;
    b2=b*b;
    c2=c*c;
    if(a+b>c and a+c>b and b+c>a)
    {
        if(a2+b2==c2 or a2+c2==b2 or b2+c2==a2)
            cout << "Right Triangle" << endl;
        else if(a2+b2<c2 or a2+c2<b2 or b2+c2<a2)
            cout << "Obtuse Triangle" << endl;
        else if(a2+b2>c2 and a2+c2>b2 and b2+c2>a2)
            cout << "Acute Triangle" << endl;
    }
    else
        cout << "Not Triangle" << endl;

    return 0;
}