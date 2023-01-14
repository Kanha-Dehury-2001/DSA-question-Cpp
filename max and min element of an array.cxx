#include <iostream>
using namespace std;

int maxI(int a[],int n){
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        if(mx<a[i]){
            mx=a[i];
        }
    }
    return mx;
}

int minI(int a[],int n){
    int mn = INT_MAX;
    for(int i=0;i<n;i++){
        //if(mn>a[i]){
//        mn = a[i];
//        }
        mn = min(mn,a[i]);
    }
    return mn;
}

 int main() 
{
    int n;
    cout << "Enter the size of array"<<endl;
    cin>>n;
    
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cout<<"The maximum element = "<<maxI(a,n)<<endl;
    cout<<"The minimum element = "<<minI(a,n);
    
	return 0;	
}