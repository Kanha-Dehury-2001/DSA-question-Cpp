#include <iostream>
using namespace std;

bool possibleSol(int a[], int n, int s, int mid)
{
    int scount = 1;
    int pagecount = 0;

    for (int i = 0; i < n; i++)
    {
        if (pagecount + a[i] <= mid){
        
            pagecount += a[i];
        }
        else
        {
            scount++;
            if (scount > s || a[i] > mid)
            {
                return false;
            }
            pagecount = a[i];
        }
    
    }
    return true;
}

int main()
{
    cout << "Enter the number of student " << endl;
    int s;
    cin >> s;

    cout << "Enter the number of books " << endl;
    int n;
    cin >> n;

    cout << "Enter the no page in book " << endl;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sun = 0;
   
     for (int j = 0; j < n; j++)
    {
        sun += a[j];
    }

    int f = 0, l = sun;
    int mid=f+(l-f)/2;

    int ans = -1;

    while (f <= l)
    {
        if (possibleSol(a, n, s, mid))
        {
            ans = mid;
            l = mid - 1;
        }
        else
        {
            f = mid + 1;
        }
        mid=f+(l-f)/2;
    }
    cout << "The minimum no of pages " << ans << endl;

    return 0;
}