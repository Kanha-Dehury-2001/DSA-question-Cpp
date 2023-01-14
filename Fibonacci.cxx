#include <iostream>
using namespace std;

 int main() 
{
	int a=0 , b=1 ,ans=0 , n;
	cout<<"Enter a number upto which you want to print fibonacci number"<<endl;
	cin>>n;
	//cout<<a<<" "<<b<<" ";
	
	while(ans<=n){
	    cout<<ans<<" ";
	    
	    
	    a = b;
	    b = ans;
	    ans = a + b;
	}
	
	return 0;
}