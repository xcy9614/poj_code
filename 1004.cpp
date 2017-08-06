#include <iostream>
using namespace std;

int main()
{
    double x;
    double sum = 0;
    int i = 0;
    while(cin >> x)
    {
        sum += x;
        i ++;
        if(i > 11)
        {
            break;
        }
    }
    cout <<char(36) << sum/12 << endl;
    return 0;
}