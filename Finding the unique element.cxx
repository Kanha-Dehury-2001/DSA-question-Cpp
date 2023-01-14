#include <iostream>
using namespace std;

 int main() 
{
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    
    int a[n];
    cout<<"Enter the element of the array"<<endl;
	
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	int ans = 0;
	for(int i=0;i<n;i++){
	    ans=ans xor a[i];
	    }
	    
	cout<<"The unique number is "<<ans<<endl;
		
	return 0;	
}