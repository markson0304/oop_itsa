#include <iostream>

using namespace std;

int main()
{
    int k, n, num=1, count = 1;
    cin >> k;
    while(k-->0)
    {
        cin >> n;
        for(; (num %= n)!=0; count++)
        {
            num = 10*num+1;
        }
        cout << count << endl;
        num = 1;
        count = 1;
    }

    return 0;
}
