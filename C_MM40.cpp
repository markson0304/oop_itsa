#include <iostream>

using namespace std;

int main()
{
    int N,i,sum=0;
    cin >> N;
    for(i=1; i<=N; i++)
    {
        if(i==1)
            cout << i << " ";
        else
            cout << "+ " << i << " ";
        sum+=i;
    }
    cout << "= " << sum << endl;

    return 0;
}
