#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, ans = 0;
    cout << "enter a number " << endl;
    cin >> n;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10;

        ans = ans + (digit * pow(2, i));
        n = n / 10;
        i++;
    }

    cout << ans;
    return 0;
}