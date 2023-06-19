#include <iostream>

using namespace std;

int main()
{
    int N,i,sum=0;
    cin >> N;
    for(i=1; i<=N; i++)
    {
        if(i%6==0 and i%12!=0)
            sum+=i;
    }
    cout << sum << endl;

    return 0;
}