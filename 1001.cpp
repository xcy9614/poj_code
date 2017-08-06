#include<iostream>
using namespace std;

int main()
{
    double r;
    int n;
    while(cin >> r >> n)
    {
        double ans = 1;
        for(int i = 0; i < n; i ++)
        {
            ans *= r;
        }
        cout << ans << endl;
    }
    return 0;
}