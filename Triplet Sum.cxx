#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the size of the arrray " << endl;
    int n, key;
    cin >> n;
    cout << "Enter the key to find" << endl;
    cin >> key;
    int a[n];
    cout << "Enter the element of the array";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if ((a[i] + a[j] + a[k]) == key)
                {
                    cout << i << "    " << j << "    "
                         << "    " << k << endl;
                }
                else {cout<<"Can't find the key"<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}