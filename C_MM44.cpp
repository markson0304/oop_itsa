#include <iostream>

using namespace std;

int main()
{
    char N[2];
    char M[8];
    int count=0;
    cin >> N;
    cin >> M;
    for(int i=0; i<=6; i++)
    {
        if(M[i]==N[0] and M[i+1]==N[1])
            count++;
    }
    cout << count << endl;

    return 0;
}