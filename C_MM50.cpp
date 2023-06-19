#include <bits/stdc++.h>
#define _for(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int readInt(){
    int x;
    cin >> x;
    return x;
}
int main(){
    int k=readInt();
    int total=0,half;
    int w[k];
    _for(i,0,k)
        total+=w[i]=readInt();
    half=total/2;
    int bag[half+1];
    memset(bag,0,sizeof(bag));
    _for(i,0,k)
        for(int j=half;j>=w[i];j--)
            bag[j]=max(bag[j-w[i]]+w[i],bag[j]);
    cout << (int)abs(total-2*bag[half]) << endl;
    return 0;
}