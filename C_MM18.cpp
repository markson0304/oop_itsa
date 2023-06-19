#include <iostream>

using namespace std;

int main()
{
    int x,i;
    int result[8];
    cin >> x;
    bool isneg = (x<0);
    //負數的話則取一的補數，轉成正數處理
    if(isneg)
        x=~x;
    //實踐二進位，倒置放入陣列
    for(i=0; i<8; i++)
    {
        result[7-i]=x%2;
        x/=2;
    }
    //再轉回來
    if(isneg)
    {
        for(i=0; i<8; i++)
        {
            if(result[i]==0)
                result[i]=1;
            else
                result[i]=0;
        }
    }
    //輸出，最後換行
    for(i=0; i<8; i++)
        cout << result[i];
    cout << "\n";

    return 0;
}