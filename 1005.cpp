#include <iostream>
#include <cmath>
using namespace std;

#define pie 3.1415926

int main()
{
    int num;
    cin >> num;
    for(int i = 0; i < num; i ++)
    {
        double x;
        double y;
        cin >> x >> y;
        double r2 = x*x+y*y;
        double s = 0.5*r2*pie;
        int ti;
        if((s/50-int(s/50)) != 0)
        {
            ti = int(s/50)+1;
        }
        else
        ti = int(s/50);

        cout << "Property " << i+1 << ": This property will begin eroding in year " << ti << "." << endl;
    }
    cout << "END OF OUTPUT." << endl;
    return 0;
}