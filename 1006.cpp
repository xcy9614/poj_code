#include <iostream>
using namespace std;

#define pi 23
#define ei 28
#define ii 33
int main()
{
    int p, e, i, d;
    int num = 1;
    while(cin >> p >> e >> i >> d)
    {
        if(p == -1 && e == -1 && i == -1 && d == -1)
        {
            break;
        }
        else
        {
            int count = 1;
            int temp_i = i;
            while(1)
            {
                if((temp_i-p)%pi == 0 && (temp_i-e)%ei == 0)
                {
                    if(temp_i == d)
                    {
                        cout << "Case " << num << ": the next triple peak occurs in 21252 days." << endl;
                    }
                    else if(temp_i > d)
                        cout << "Case " << num << ": the next triple peak occurs in " << temp_i - d << " days." << endl;
                    else
                    {
                        cout << "Case " << num << ": the next triple peak occurs in " << temp_i + pi*ei*ii - d << " days." << endl;
                    }
                    break;
                }
                if(d > i)
                temp_i += ii;
                else
                temp_i -= ii;
            }
        }
        num ++;
    }
}