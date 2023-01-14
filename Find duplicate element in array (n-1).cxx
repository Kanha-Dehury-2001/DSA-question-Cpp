#include <iostream>
using namespace std;

 int main() 
{
    cout<<"Enter the size of the array "<<endl;
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int ans=0;
    
    for(int i=0;i<n;i++){
        ans = a[i]^ans;
    }
    
    for(int i=0;i<n;i++){
        
        ans = ans ^ i;
    }
    
    cout<<"The duplicate element is "<<ans;
    
	return 0;	
}