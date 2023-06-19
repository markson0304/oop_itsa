#include <iostream>

using namespace std;

int main()
{
    int N,i;
    cin >> N;
    for(i=1; i<=N; i++)
    {
        if(i%35==0)
        {
            if(i==35)
                cout << i;
            else
                cout << " " << i;
        }
    }
    cout << "\n";

    return 0;
}