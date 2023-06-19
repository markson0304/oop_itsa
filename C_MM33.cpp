#include <iostream>

using namespace std;

int main()
{
    int N,i,j,sum;
    cin >> N;
    for(i=6; i<=N; i+=2)
    {
        sum=0;
        for(j=1; j<i; j++)
        {
            if(i%j==0)
                sum+=j;
        }
        if(sum==i)
        {
            if(i==6)
                cout << i;
            else
                cout << " " << i;
        }
    }
    cout << "\n";

    return 0;
}