#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    //bool i = true;
    int j = 0;
    while (n)
    {
        if ((n & 1) == 1)
        {
            j++;
        }
        n = n >> 1;
    }

    if (j == 1)
    {
        cout << "it is power of two"<<endl;
    }
    else
        cout << "it is not the power of two"<<endl;

    int m;
    cout << "enter a number ";
    cin >> m;

    int a = 1;
    bool b = false;
    while (a <= m)
    {
        if (a == m)
        {
            b = true;
        }
        a = a * 2;
    }
    if (b)
    {
        cout << "power of two";
    }
    else
        cout << "not the power of two";
    return 0;
}