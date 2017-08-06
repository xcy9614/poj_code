#include <iostream>
using namespace std;

int HangOver(double len)
{
    double n = 1;
    double sum = 0;
    while(1)
    {   
        sum += 1/(n+1);
        if(sum >= len)
        {
            return n;
        }
        n ++;
    }
}

int main()
{
    double length = 1.00;
    while(cin >> length)
    {
        if(length != 0.00)
        {
            cout << HangOver(length);
            cout << " card(s)" << endl;
        }
        else
        return 0;
    }
}