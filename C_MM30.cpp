#include <iostream>

using namespace std;

int main()
{
    int x,i;
    bool isprime=true;
    cin >> x;
    for(i=2; i<x; i++)
    {
        if(x%i==0)
        {
            isprime=false;
            break;
        }
    }
    if(isprime)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}